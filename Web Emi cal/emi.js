
          function emi() {
              if (document.getElementById('loan1').value == null || document.getElementById('loan1').value.length == 0 || document.getElementById('months1').value == null || document.getElementById('months1').value.length == 0 || document.getElementById('rate1').value == null || document.getElementById('rate1').value.length == 0) {
                  document.getElementById('pay1').value = 'Data Reqd.'
              }
              else {
                  var pay1 = '';
                  var princ1 = document.getElementById('loan1').value;
                  var term1 = document.getElementById('months1').value;
                  var intr1 = document.getElementById('rate1').value / 1200;
                  document.getElementById('pay1').value = Math.round(princ1 * intr1 / (1 - (Math.pow(1 / (1 + intr1), term1))) * 100) / 100;
                  document.getElementById('gt1').value = Math.round((document.getElementById('pay1').value * document.getElementById('months1').value) * 100) / 100;
                  document.getElementById('tintt1').value = Math.round((document.getElementById('gt1').value * 1 - document.getElementById('loan1').value * 1) * 100) / 100;
              }
          }
