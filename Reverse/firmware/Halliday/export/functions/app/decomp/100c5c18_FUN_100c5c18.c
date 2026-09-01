/* FUN_100c5c18 @ 0x100c5c18 */

undefined4 FUN_100c5c18(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r2;
  int extraout_r2_00;
  char *pcVar4;
  undefined4 local_28;
  undefined3 uStack_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  
  cVar1 = *param_1;
  iVar2 = FUN_10132e2e(DAT_100c5cbc + 0x30,6);
  if (((iVar2 != 0) && (iVar2 = FUN_10132e2e(extraout_r2 + 0x30,8), iVar2 != 0)) &&
     (*(char *)(extraout_r2_00 + 0x20) != cVar1)) {
    return 0xffffff7a;
  }
  pcVar4 = param_1 + 9;
  *(char *)(extraout_r2 + 0x3b) = *param_1;
  local_28 = 0;
  uStack_24 = 0;
  iVar2 = FUN_10132eb0(pcVar4,&local_28);
  if (iVar2 == 0) {
    local_20 = 0xffffff00;
    local_1c = 0xffff;
    local_1a = 0xff;
    iVar2 = FUN_100ca10c(*param_1,&local_20);
    if (iVar2 == 0) {
      return 0xfffffff4;
    }
    uVar3 = 4;
  }
  else {
    iVar2 = FUN_100ca37c(*param_1,pcVar4);
    if (iVar2 != 0) {
      return 0xffffffea;
    }
    iVar2 = FUN_100ca10c(*param_1,pcVar4);
    if (iVar2 == 0) {
      return 0xfffffff4;
    }
    uVar3 = 5;
  }
  FUN_100cad6c(iVar2,uVar3);
  *param_2 = iVar2;
  return 0;
}

