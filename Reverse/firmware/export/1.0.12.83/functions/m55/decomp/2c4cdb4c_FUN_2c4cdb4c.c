/* FUN_2c4cdb4c @ 0x2c4cdb4c */

undefined4 FUN_2c4cdb4c(uint *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(char *)(param_2 + 0xb) == '\x02') {
    iVar5 = 4;
    uVar2 = *(undefined1 *)(param_3 + 9);
  }
  else {
    iVar5 = 6;
    uVar2 = *(undefined1 *)(param_3 + 8);
  }
  *(undefined1 *)(param_2 + 0xf) = uVar2;
  uVar3 = param_1[1];
  uVar4 = iVar5 - uVar3;
  if ((int)uVar4 < 1) {
    uVar4 = *param_1;
    uVar6 = 0;
  }
  else {
    if (uVar4 == 0x20) {
      uVar6 = 0;
    }
    else {
      uVar6 = *param_1 << (uVar4 & 0xff);
    }
    uVar4 = FUN_2c4d74d4(param_1 + 2);
    *param_1 = uVar4;
    uVar3 = param_1[1] + 0x20;
  }
  param_1[1] = uVar3 - iVar5;
  uVar1 = 0x4002;
  uVar3 = (uVar4 >> (uVar3 - iVar5 & 0xff) | uVar6) & *(uint *)(DAT_2c4cdbb4 + iVar5 * 4);
  if ((uVar3 & 0xff) <= (uint)*(byte *)(param_2 + 0xf)) {
    uVar1 = 0;
  }
  *(char *)(param_2 + 0xc) = (char)uVar3;
  return uVar1;
}

