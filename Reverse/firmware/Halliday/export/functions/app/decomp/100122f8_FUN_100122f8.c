/* FUN_100122f8 @ 0x100122f8 */

undefined4 FUN_100122f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar1 = DAT_1001236c;
  iVar4 = *DAT_10012370;
  iVar2 = thunk_FUN_1009efa0(DAT_10012374,DAT_1001236c,4,0,param_1,param_2,param_3);
  if (iVar2 < 1) {
LAB_1001235a:
    if (*DAT_10012370 == iVar4) {
      return 0;
    }
  }
  else {
    FUN_100a5b78((DAT_1001237c - DAT_10012378) * 0x20 & 0xff00U | 0x1660032,DAT_10012384,
                 DAT_10012380,*pcVar1,pcVar1[1]);
    if ((*pcVar1 == '\0') || (pcVar1[1] != '\v')) goto LAB_1001235a;
    if (*DAT_10012370 == iVar4) goto LAB_1001234e;
  }
  FUN_1013cdc0();
LAB_1001234e:
  uVar3 = FUN_1005c958(DAT_10012388);
  return uVar3;
}

