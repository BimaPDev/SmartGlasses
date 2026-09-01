/* FUN_1007ecec @ 0x1007ecec */

undefined4 FUN_1007ecec(int *param_1,undefined4 param_2,ushort *param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1[3];
  iVar5 = param_4;
  iVar1 = FUN_1007ec9c();
  if (iVar1 == 1) {
    if (param_4 != 0) {
      FUN_1012109e(param_1,param_2,param_3,param_4,iVar5);
    }
    FUN_1012102e(param_1,*(undefined1 *)(*(int *)(iVar4 + 0x74) + 1),*param_3 & 0xfff);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if ((*(char *)(*param_1 + 0x10) != '\0') &&
       (pcVar2 = *(code **)(*param_1 + 0xc), uVar3 = 0, pcVar2 != (code *)0x0)) {
      (*pcVar2)(DAT_1007ed48,DAT_1007ed44,0xd5);
      uVar3 = 0;
    }
  }
  return uVar3;
}

