/* FUN_101215ac @ 0x101215ac */

undefined4 FUN_101215ac(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 extraout_r2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  iVar3 = iVar4;
  do {
    if ((*(byte *)(iVar3 + 0x91) == param_2) && (*(char *)(iVar3 + 0x90) != '\0')) {
      uVar1 = *(undefined1 *)(iVar3 + 0x92);
      *(int *)(iVar4 + 0x8c) = iVar3 + 0x90;
      iVar2 = FUN_10121390(param_1,uVar1,param_3,iVar3 + 0x90,param_4);
      if (iVar2 != 1) {
        return 0;
      }
      **(undefined1 **)(iVar4 + 0x8c) = 0;
      param_3 = extraout_r2;
    }
    iVar3 = iVar3 + 0xc;
  } while (iVar3 != iVar4 + 0x30);
  return 1;
}

