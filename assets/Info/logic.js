function download(url){
  let downloadLink = document.createElement('a');
  downloadLink.setAttribute('href', './' + url); // Specify the path to your file
  downloadLink.setAttribute('download', url); // Specify the filename for the downloaded file

  // Programmatically trigger the click event on the link
  downloadLink.click();
}

function home(){
  location.href = 'https://sethlans01.github.io/Informatica2B/';
}
