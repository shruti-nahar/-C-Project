
function fun() {
        let pay1 = '';
        let princ1 = document.getElementById('demo1').value;
        let term1 = document.getElementById('demo2').value;
        let intr1 = document.getElementById('demo3').value / 1200;
        
        let a= Math.round(princ1 * intr1 / (1 - (Math.pow(1 / (1 + intr1), term1))) * 100) / 100;
        let b = Math.round((document.getElementById('pay1').value * document.getElementById('demo2').value) * 100) / 100;
        let c= Math.round((document.getElementById('gt1').value * 1 - document.getElementById('demo1').value * 1) * 100) / 100;
       document.getElementById('pay1').innerHTML=a;
}