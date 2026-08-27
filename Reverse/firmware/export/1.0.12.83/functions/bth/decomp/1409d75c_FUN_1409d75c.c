/* FUN_1409d75c @ 0x1409d75c */

void FUN_1409d75c(uint param_1,char *param_2)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = DAT_1409d820;
  if (param_2 == (char *)0x0) {
    *DAT_1409d81c = 0xff00;
    uVar4 = DAT_1409d838;
    if (param_1 < 8) {
      uVar4 = *(undefined4 *)(DAT_1409d820 + param_1 * 4);
    }
    FUN_1402a6e8(4,0xc4,DAT_1409d834,DAT_1409d830,DAT_1409d83c,uVar4);
    return;
  }
  if (1 < param_1 - 3) {
    if (*param_2 != '\x01') {
      return;
    }
    *DAT_1409d81c = *(undefined2 *)param_2;
    uVar4 = DAT_1409d838;
    if (param_1 < 8) {
      uVar4 = *(undefined4 *)(DAT_1409d820 + param_1 * 4);
    }
    uVar5 = DAT_1409d840;
    if ((*param_2 != '\x01') && (uVar5 = DAT_1409d824, *param_2 != '\x02')) {
      uVar5 = DAT_1409d828;
    }
    FUN_1402a6e8(4,0xb8,DAT_1409d834,DAT_1409d830,DAT_1409d82c,uVar4,uVar5,param_2[1]);
    return;
  }
  uVar1 = *(undefined2 *)param_2;
  *DAT_1409d81c = uVar1;
  cVar2 = (char)uVar1;
  uVar4 = DAT_1409d840;
  if ((cVar2 != '\x01') && (uVar4 = DAT_1409d824, cVar2 != '\x02')) {
    uVar4 = DAT_1409d828;
  }
  FUN_1402a6e8(4,0xd5,DAT_1409d834,DAT_1409d830,DAT_1409d82c,*(undefined4 *)(iVar3 + param_1 * 4),
               uVar4,param_2[1]);
  return;
}

