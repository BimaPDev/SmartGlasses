/* FUN_10125ee4 @ 0x10125ee4 */

uint FUN_10125ee4(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (((param_2 & 0x60000000) == 0x20000000) && (uVar1 = param_2 & 0x9fffffff, (int)uVar1 < 0x7d1))
  {
    if (1000 < (int)uVar1) {
      uVar1 = 1000 - uVar1;
    }
    param_2 = (int)(param_4 * uVar1) / 100;
  }
  if (((param_3 & 0x60000000) == 0x20000000) && (uVar1 = param_3 & 0x9fffffff, (int)uVar1 < 0x7d1))
  {
    if (1000 < (int)uVar1) {
      uVar1 = 1000 - uVar1;
    }
    param_3 = (int)(uVar1 * param_4) / 100;
  }
  if ((int)param_3 <= (int)param_1) {
    param_1 = param_3;
  }
  if ((int)param_1 < (int)param_2) {
    param_1 = param_2;
  }
  return param_1;
}

