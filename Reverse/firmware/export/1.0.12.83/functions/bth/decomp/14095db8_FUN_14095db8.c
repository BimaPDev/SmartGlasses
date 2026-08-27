/* FUN_14095db8 @ 0x14095db8 */

uint FUN_14095db8(byte *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = (uint)*param_1;
  pbVar2 = param_1;
  if ((uVar1 - 1 & 0xff) < 0xee) {
    do {
      if (pbVar2[1] == param_2) {
        uVar1 = uVar1 - 1 & 0xff;
        if (uVar1 != 0) {
          if (uVar1 <= param_4) {
            param_4 = uVar1;
          }
          FUN_140e5278(param_3,pbVar2 + 2,param_4);
        }
        return uVar1;
      }
      pbVar2 = pbVar2 + uVar1 + 1;
      uVar1 = (uint)*pbVar2;
      if (uVar1 == 0) {
        return 0;
      }
    } while ((int)(pbVar2 + (uVar1 - (int)param_1)) < 0xef);
  }
  return 0;
}

