/* FUN_1409e1ec @ 0x1409e1ec */

undefined4 FUN_1409e1ec(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  puVar2 = DAT_1409e3cc;
  uVar4 = DAT_1409e3f4;
  if ((*(int *)(param_1 + 8) != 1) && (uVar4 = DAT_1409e3b0, *(int *)(param_1 + 8) == 2)) {
    uVar4 = DAT_1409e3b4;
  }
  uVar5 = (uint)*(byte *)(param_1 + 6);
  uVar6 = DAT_1409e3bc;
  if (*(byte *)(param_1 + 0x10) < 6) {
    uVar6 = *(undefined4 *)(DAT_1409e3b8 + (uint)*(byte *)(param_1 + 0x10) * 4);
  }
  FUN_1402a6e8(4,0x199,DAT_1409e3c4,DAT_1409e3c8,DAT_1409e3c0,uVar4,uVar5,uVar6);
  FUN_1402a9fc(DAT_1409e3d0,1,6,param_1);
  iVar3 = FUN_1409e874(*puVar2);
  if (iVar3 == 0) {
    iVar3 = FUN_1409e7c0(*puVar2);
    uVar4 = DAT_1409e3f4;
    if ((*(int *)(iVar3 + 8) != 1) && (uVar4 = DAT_1409e3b0, *(int *)(iVar3 + 8) == 2)) {
      uVar4 = DAT_1409e3b4;
    }
    uVar5 = (uint)*(byte *)(iVar3 + 6);
    uVar6 = DAT_1409e3bc;
    if (*(byte *)(iVar3 + 0x10) < 6) {
      uVar6 = *(undefined4 *)(DAT_1409e3b8 + (uint)*(byte *)(iVar3 + 0x10) * 4);
    }
    FUN_1402a6e8(4,0x1a4,DAT_1409e3c4,DAT_1409e3c8,DAT_1409e3d4,uVar4,uVar5,uVar6);
    FUN_1402a9fc(DAT_1409e3d0,1,6,iVar3);
    iVar3 = FUN_1409e7c0(*puVar2);
    if (((*(char *)(iVar3 + 6) == *(char *)(param_1 + 6)) &&
        (*(int *)(param_1 + 8) == *(int *)(iVar3 + 8))) &&
       (*(char *)(iVar3 + 0x10) == *(char *)(param_1 + 0x10))) {
      FUN_1402a6e8(4,0x1aa,DAT_1409e3c4,DAT_1409e3c8,DAT_1409e3e4,uVar4,uVar5,uVar6);
      FUN_1409e854(*puVar2);
      uVar1 = *(undefined1 *)(param_1 + 6);
      iVar3 = FUN_1409e874(*puVar2);
      if (iVar3 == 0) {
        iVar3 = FUN_1409e7c0(*puVar2);
        uVar4 = DAT_1409e3f4;
        if ((*(int *)(iVar3 + 8) != 1) && (uVar4 = DAT_1409e3b0, *(int *)(iVar3 + 8) == 2)) {
          uVar4 = DAT_1409e3b4;
        }
        uVar5 = (uint)*(byte *)(iVar3 + 6);
        uVar6 = DAT_1409e3bc;
        if (*(byte *)(iVar3 + 0x10) < 6) {
          uVar6 = *(undefined4 *)(DAT_1409e3b8 + (uint)*(byte *)(iVar3 + 0x10) * 4);
        }
        FUN_1402a6e8(4,0x17f,DAT_1409e3c4,DAT_1409e3c8,DAT_1409e3fc,uVar4,uVar5,uVar6);
        if (*(code **)(iVar3 + 0x18) != (code *)0x0) {
          (**(code **)(iVar3 + 0x18))(*(undefined1 *)(iVar3 + 6),*(undefined1 *)(iVar3 + 0x10),1);
        }
      }
      else {
        if ((code *)*DAT_1409e3e8 != (code *)0x0) {
          (*(code *)*DAT_1409e3e8)();
        }
        if ((code *)*DAT_1409e3ec != (code *)0x0) {
          (*(code *)*DAT_1409e3ec)(uVar1);
        }
        FUN_1402a6e8(4,0x191,DAT_1409e3c4,DAT_1409e3c8,DAT_1409e3f0);
      }
    }
    else {
      FUN_1402a6e8(4,0x1b5,DAT_1409e3c4,DAT_1409e3c8,DAT_1409e3d8,uVar4,uVar5,uVar6);
      FUN_1409e888(*puVar2,DAT_1409e3dc,param_1);
    }
    FUN_1409de74(*puVar2);
    uVar4 = FUN_1409e86c(*puVar2);
    FUN_1402a6e8(4,0x1bb,DAT_1409e3c4,DAT_1409e3c8,DAT_1409e3e0,uVar4,uVar5,uVar6);
    return 1;
  }
  FUN_1402a6e8(4,0x1a0,DAT_1409e3c4,DAT_1409e3c8,DAT_1409e3f8,uVar4,uVar5,uVar6);
  return 0;
}

