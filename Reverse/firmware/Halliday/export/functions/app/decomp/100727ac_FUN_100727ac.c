/* FUN_100727ac @ 0x100727ac */

undefined4 FUN_100727ac(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  uint local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar3 = DAT_100728c0;
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  if (2 < (int)param_1) {
LAB_100727b8:
    FUN_10119dc2(uVar3,param_1);
    return 0xffffffea;
  }
  iVar4 = FUN_10068cf4(DAT_100728c4,0x103,0);
  uVar3 = DAT_100728d0;
  piVar1 = DAT_100728cc;
  if (iVar4 == DAT_100728c8) {
    *DAT_100728cc = 0;
    FUN_10119dc2(uVar3);
    return 0xfffffff4;
  }
  iVar4 = FUN_1011ea48(*(ushort *)(iVar4 + 8) + 0x2ff18000,0,0x103);
  *piVar1 = iVar4;
  *(undefined1 *)(iVar4 + 0x102) = 1;
  *(char *)(iVar4 + 0x101) = (char)param_1;
  iVar4 = FUN_1007193c(DAT_100728d4);
  if (iVar4 != 0) {
    return 0xffffffea;
  }
  if ((param_1 & 0xff) != 0) {
    iVar4 = FUN_10112e84(DAT_100728d8);
    piVar2 = DAT_100728dc;
    *DAT_100728dc = iVar4;
    if (iVar4 == 0) {
      FUN_10119dc2(DAT_100728e0,DAT_100728d8);
      param_1 = 0xffffffed;
      uVar3 = DAT_100728e4;
      goto LAB_100727b8;
    }
    FUN_10053968(DAT_100728e8);
    FUN_10068b50(DAT_100728e8);
    pcVar5 = *(code **)(*(int *)(*piVar2 + 8) + 0x10);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(*piVar2,&local_20);
    }
    local_20 = 0x1c200;
    pcVar5 = *(code **)(*(int *)(*piVar2 + 8) + 0xc);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(*piVar2,&local_20);
    }
    FUN_1011efd2(*piVar2);
    FUN_1006ce2c(*piVar2,1,0);
    FUN_1011efe4(*piVar2);
    FUN_1006ce2c(*piVar2,0);
    pcVar5 = *(code **)(*(int *)(*piVar2 + 8) + 0x2c);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)();
    }
    iVar4 = *(int *)(*piVar2 + 8);
    if ((iVar4 != 0) && (pcVar5 = *(code **)(iVar4 + 0x48), pcVar5 != (code *)0x0)) {
      (*pcVar5)(*piVar2,DAT_100728ec,0);
    }
    pcVar5 = *(code **)(*(int *)(*piVar2 + 8) + 0x28);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)();
    }
  }
  if (*(char *)(*piVar1 + 0x101) != '\x01') {
    FUN_10072638();
  }
  FUN_10119dc2(DAT_100728f0,param_1);
  return 0;
}

