/* FUN_1002efe4 @ 0x1002efe4 */

void FUN_1002efe4(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *DAT_1002f00c;
  iVar1 = FUN_10087308();
  if (*DAT_1002f00c != iVar4) {
    iVar1 = FUN_1013cdc0();
  }
  if (*(undefined4 **)(iVar1 + 0xc) != (undefined4 *)0x0) {
    uVar5 = **(undefined4 **)(iVar1 + 0xc);
    uVar2 = FUN_101243ba();
    FUN_10086f50(uVar5,0xf,uVar2);
    FUN_10125af4(**(undefined4 **)(iVar1 + 0xc));
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  for (piVar3 = (int *)FUN_1012b06a(iVar1); piVar3 != (int *)0x0;
      piVar3 = (int *)FUN_1012b076(iVar1,piVar3)) {
    if (*(int *)(*piVar3 + 8) != 0) {
      *(undefined4 *)(*(int *)(*piVar3 + 8) + 8) = 0;
    }
  }
  FUN_1009413c(iVar1);
  return;
}

