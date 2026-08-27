/* FUN_2c4aac50 @ 0x2c4aac50 */

undefined4 FUN_2c4aac50(int param_1)

{
  undefined1 uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort uVar9;
  uint uVar10;
  ushort local_22;
  int local_20;
  int local_1c;
  
  local_1c = *DAT_2c4aaf68;
  puVar2 = (uint *)FUN_2c4aa8e0(param_1,param_1 + 0x36,1,0);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x525,DAT_2c4ab100,DAT_2c4ab10c,DAT_2c4ab124,*(undefined1 *)(param_1 + 0xa0),
          DAT_2c4ab120);
  }
  FUN_2c4aa73c(param_1,puVar2[1],*puVar2,*(undefined2 *)(param_1 + 0x1d8));
  uVar7 = *puVar2;
  iVar3 = *(int *)(param_1 + 0xc4);
  *(uint *)(param_1 + 0xb4) = uVar7;
  uVar10 = puVar2[1];
  if (iVar3 == 0) {
    iVar3 = FUN_2c4aa4ec(uVar7);
    *(int *)(param_1 + 0xc4) = iVar3;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x507,DAT_2c4ab100,DAT_2c4ab10c,DAT_2c4ab130,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ab12c);
    }
    *(uint *)(param_1 + 0xc0) = uVar7;
  }
  else if (*(uint *)(param_1 + 0xc0) < uVar7) {
    FUN_2c4aa540();
    *(undefined4 *)(param_1 + 0xc4) = 0;
    iVar3 = FUN_2c4aa4ec(uVar7);
    *(int *)(param_1 + 0xc4) = iVar3;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x510,DAT_2c4aaf78,DAT_2c4aaf7c,DAT_2c4aaf74,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4aaf70);
    }
  }
  FUN_2c674668(iVar3,uVar10,uVar7);
  iVar3 = *(int *)(param_1 + 0xc4);
  if ((uVar7 & 1) == 0) {
    if (uVar7 != 0) {
      uVar10 = 0;
      do {
        uVar1 = *(undefined1 *)(iVar3 + uVar10);
        *(undefined1 *)(iVar3 + uVar10) = *(undefined1 *)(iVar3 + 1 + uVar10);
        *(undefined1 *)(iVar3 + 1 + uVar10) = uVar1;
        uVar10 = uVar10 + 2;
      } while (uVar10 < uVar7);
    }
    iVar3 = (**(code **)(param_1 + 0x348))
                      (param_1,*(undefined2 *)(param_1 + 300),&local_20,
                       *(undefined1 *)(param_1 + 0x130));
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2ce,DAT_2c4aaf78,DAT_2c4aaf7c,DAT_2c4aaf8c,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4aaf88);
    }
    iVar3 = (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0x148),&local_22);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2af,DAT_2c4aaf78,DAT_2c4aaf7c,DAT_2c4aaf84,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4aaf80);
    }
    uVar10 = (uint)local_22;
    uVar7 = *(uint *)(param_1 + 0x160);
    local_22 = 0;
    iVar3 = (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0x100),&local_22);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x246,DAT_2c4ab100,DAT_2c4ab10c,DAT_2c4ab108,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ab104);
    }
    uVar5 = (uint)local_22 & ~*(uint *)(param_1 + 0x104);
    uVar9 = (ushort)uVar5;
    if ((uVar5 & ~*(uint *)(param_1 + 0x108)) != 0) {
      uVar9 = uVar9 | *(ushort *)(param_1 + 0x10c);
    }
    iVar3 = *(int *)(param_1 + 0x110) * (int)(short)uVar9 + *(int *)(param_1 + 0x134);
    if ((uVar10 & ~uVar7) == 0) {
      local_22 = 0;
      iVar4 = (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0x100),&local_22);
      if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x276,DAT_2c4ab100,DAT_2c4ab10c,DAT_2c4ab108,*(undefined1 *)(param_1 + 0xa0),
              DAT_2c4ab110);
      }
      uVar7 = (int)(uint)local_22 >> (*(uint *)(param_1 + 0x154) & 0xff);
      uVar9 = (ushort)uVar7;
      if ((uVar7 & 0xffff & *(uint *)(param_1 + 0x158)) != 0) {
        uVar9 = uVar9 | *(ushort *)(param_1 + 0x15c);
      }
      iVar6 = *(int *)(param_1 + 0x140);
      iVar4 = *(int *)(param_1 + 0x150) * (int)(short)uVar9 + *(int *)(param_1 + 0x134);
      local_20 = local_20 *
                 ((iVar3 * ((*(int *)(param_1 + 0x138) * *(int *)(param_1 + 0x14c)) / iVar6)) /
                 iVar4);
    }
    else {
      local_22 = 0;
      iVar4 = (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0x114),&local_22);
      if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x25d,DAT_2c4ab100,DAT_2c4ab10c,DAT_2c4ab108,*(undefined1 *)(param_1 + 0xa0),
              DAT_2c4ab11c);
      }
      uVar7 = (int)(uint)local_22 >> (*(uint *)(param_1 + 0x124) & 0xff) &
              ~*(uint *)(param_1 + 0x118);
      uVar9 = (ushort)uVar7;
      if ((uVar7 & 0xffff & ~*(uint *)(param_1 + 0x11c)) != 0) {
        uVar9 = uVar9 | *(ushort *)(param_1 + 0x120);
      }
      iVar4 = *(int *)(param_1 + 0x128) * (int)(short)uVar9 + *(int *)(param_1 + 0x134);
      iVar6 = *(int *)(param_1 + 0x140);
      local_20 = local_20 *
                 ((iVar3 * ((*(int *)(param_1 + 0x138) * *(int *)(param_1 + 0x13c)) / iVar6)) /
                 iVar4);
    }
    if ((iVar4 == 0) || (iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2f1,DAT_2c4ab100,DAT_2c4ab10c,DAT_2c4ab128,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ab114,iVar4,iVar6);
    }
    iVar4 = local_20 >> (*(uint *)(param_1 + 0x144) & 0xff);
    iVar3 = (**(code **)(param_1 + 0x344))
                      (param_1,*(undefined2 *)(param_1 + 300),iVar4,*(undefined1 *)(param_1 + 0x130)
                      );
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2fd,DAT_2c4aaf78,DAT_2c4aaf7c,DAT_2c4aafa4,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4aaf88);
    }
    iVar3 = FUN_2c4aab6c(param_1,*(undefined4 *)(param_1 + 300),iVar4,
                         *(undefined1 *)(param_1 + 0x130));
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x304,DAT_2c4ab100,DAT_2c4ab10c,DAT_2c4ab118,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ab114);
    }
    FUN_2c4ad210(param_1);
    local_20 = 0;
    iVar3 = (**(code **)(param_1 + 0x348))
                      (param_1,*(undefined2 *)(param_1 + 0x310),&local_20,
                       *(undefined1 *)(param_1 + 0x314));
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x44d,DAT_2c4aaf78,DAT_2c4aaf7c,DAT_2c4aafa0,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4aaf9c,iVar3);
    }
    *(uint *)(param_1 + 0x318) =
         (uint)((ulonglong)DAT_2c4aaf6c * (ulonglong)(uint)(local_20 << 5) >> 0x25);
    iVar3 = (**(code **)(param_1 + 0x348))
                      (param_1,*(undefined2 *)(param_1 + 500),param_1 + 0x1fc,
                       *(undefined1 *)(param_1 + 0x1f8));
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x43d,DAT_2c4aaf78,DAT_2c4aaf7c,DAT_2c4aaf90,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4aaf94);
    }
    uVar8 = 0;
    *(undefined1 *)(param_1 + 0x9a) = 0;
  }
  else {
    uVar8 = 0xffffffea;
  }
  if (*DAT_2c4aaf68 != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar8;
}

