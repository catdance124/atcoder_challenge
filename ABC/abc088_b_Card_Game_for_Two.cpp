var convert_api_secret = PropertiesService.getScriptProperties().getProperty('CONVERT_API_SECRET');

// pdfをpngに変換
function pdf2png(pdf){
  var pdf2png_URL = "https://v2.convertapi.com/convert/pdf/to/png?Secret=" + convert_api_secret;
  var postData = {
    "Parameters": [
        {
            "Name": "File",
            "FileValue": {
                "Name": pdf.getName(),
                "Data": Utilities.base64Encode(pdf.getBytes())
            }
        }
    ]
  };
  var options = {
    "method" : "POST",
    "headers" : {
      "Content-Type" : "application/json"
    },
    "payload" : JSON.stringify(postData)
  };
  
  var response = UrlFetchApp.fetch(pdf2png_URL, options);
  var content = JSON.parse(response.getContentText());
  var decoded = Utilities.base64Decode(content['Files'][0]['FileData']);
  var filename = content['Files'][0]['FileName'];
  var png = Utilities.newBlob(decoded, 'image/png', filename)
  
  return png;
}

// pdf化したシートを取得し画像にする
function get_seat_image() {
  var spreadSheet = SpreadsheetApp.openById('1TjFt1aC2MZi1Lwo1QAiVMHoZ155m2P0W6jeZkjkhLVc');
  var seatSheet = spreadSheet.getSheetByName('ゼミ席表');
  var pdf = spreadSheet.getAs('application/pdf').setName('seminar_seat.pdf'); // pdf取得
  var png = pdf2png(pdf);
  
  return png;
}


function send_seminar_seat_image(){
  var channel = "api-test-channel";
  //var text = "This is a test chat.";
  //post_message(channel, text);
  var png = get_seat_image();
  post_file(channel, png);
}