/* FUN_100bf360 @ 0x100bf360 */

void FUN_100bf360(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  short sVar3;
  
  piVar1 = DAT_100bf3d4;
  *(byte *)(DAT_100bf3d4 + 3) = *(byte *)(DAT_100bf3d4 + 3) | 1;
  if (*piVar1 != 0) {
    FUN_100bee34();
    sVar3 = 0xc9;
    while ((*piVar1 != 0 && (sVar3 = sVar3 + -1, sVar3 != 0))) {
      FUN_1011dbc8(10);
    }
    FUN_1011dbc8(0x32);
  }
  FUN_100c1418();
  FUN_100bf2b8();
  FUN_100be32c(0);
  uVar2 = DAT_100bf3d8;
  *(undefined1 *)(piVar1 + 5) = 0;
  FUN_1013cb84(uVar2);
  FUN_1013cb84(DAT_100bf3dc);
  FUN_1013cb84(DAT_100bf3e0);
  FUN_1013cb84(DAT_100bf3e4);
  *(undefined1 *)((int)piVar1 + 0x111) = 0;
  *(undefined1 *)((int)piVar1 + 0x112) = 0;
  FUN_100c1068(0);
  FUN_1013cb84(DAT_100bf3e8,extraout_r1,extraout_r2,in_r3);
  return;
}

