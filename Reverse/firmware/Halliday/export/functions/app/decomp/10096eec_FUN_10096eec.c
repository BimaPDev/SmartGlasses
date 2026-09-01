/* FUN_10096eec @ 0x10096eec */

void FUN_10096eec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(byte *)(param_1 + 0x54) & 7) == 1) {
    iVar3 = *(int *)(param_1 + 0x34) + 1;
    if (iVar3 != 0) {
      iVar3 = (*(code *)*DAT_10096f48)
                        (*(undefined4 *)(param_1 + 0x2c),*(int *)(param_1 + 0x34) + -3,iVar3,
                         (code *)*DAT_10096f48,param_4);
      uVar2 = 0;
      if ((int)((uint)*(byte *)(param_1 + 0x54) << 0x19) < 0) {
        iVar6 = *(int *)(param_1 + 0x30);
      }
      else {
        iVar6 = param_1 + 0x30;
      }
      while( true ) {
        iVar4 = *(int *)(param_1 + 0x2c);
        iVar5 = iVar3 + (uVar2 & 0xff);
        uVar1 = *(undefined1 *)(iVar6 + (uVar2 & 0xff));
        uVar2 = uVar2 + 1;
        if (*(char *)(iVar4 + iVar5) == '\0') break;
        *(undefined1 *)(iVar4 + iVar5) = uVar1;
      }
      *(undefined1 *)(iVar4 + iVar5) = uVar1;
      FUN_10096e9c(param_1);
      *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    }
  }
  return;
}

