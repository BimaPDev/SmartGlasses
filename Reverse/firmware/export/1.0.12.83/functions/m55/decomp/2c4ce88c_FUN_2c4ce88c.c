/* FUN_2c4ce88c @ 0x2c4ce88c */

void FUN_2c4ce88c(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = param_1[1];
  uVar2 = 1 - uVar1;
  if ((int)uVar2 < 1) {
    uVar2 = *param_1;
    bVar3 = 0;
  }
  else {
    if (uVar2 == 0x20) {
      bVar3 = 0;
    }
    else {
      bVar3 = (byte)(*param_1 << (uVar2 & 0xff));
    }
    uVar2 = FUN_2c4d74d4(param_1 + 2);
    *param_1 = uVar2;
    uVar1 = param_1[1] + 0x20;
  }
  param_1[1] = uVar1 - 1;
  *(byte *)(param_2 + 0x260) =
       ((byte)(uVar2 >> (uVar1 - 1 & 0xff)) | bVar3) & (byte)*(undefined4 *)(DAT_2c4ce8d4 + 4);
  return;
}

