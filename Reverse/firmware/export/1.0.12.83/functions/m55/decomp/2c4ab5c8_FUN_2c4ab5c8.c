/* FUN_2c4ab5c8 @ 0x2c4ab5c8 */

undefined4 FUN_2c4ab5c8(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  ushort local_30;
  ushort local_2e;
  int local_2c;
  
  iVar9 = param_1 + 0x36;
  local_2c = *DAT_2c4ab90c;
  iVar1 = FUN_2c66c540(param_1 + 4,iVar9,0x32,0);
  if ((iVar1 != 0) || (param_3 != 0)) {
    puVar2 = (uint *)FUN_2c4aa8e0(param_1,iVar9,0);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x4ae,DAT_2c4ab91c,DAT_2c4ab918,DAT_2c4ab914,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ab910);
    }
    uVar4 = *puVar2;
    uVar8 = uVar4 >> 1;
    uVar6 = (uVar4 & 3) >> 1;
    if ((int)(uVar4 << 0x1e) < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x471,DAT_2c4aba3c,DAT_2c4aba44,DAT_2c4aba60,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4aba5c,uVar8);
    }
    if (uVar8 != 0) {
      puVar10 = (ushort *)(puVar2[1] + 2);
      do {
        uVar4 = (uint)(byte)puVar10[-1];
        uVar7 = (uint)*puVar10;
        if (uVar4 == *(uint *)(param_1 + 200)) {
          *(uint *)(param_1 + 0xd4) = uVar7;
          uVar7 = (uint)*(ushort *)(param_1 + 0xd0);
        }
        if (uVar4 == *(uint *)(param_1 + 0xf0)) {
          (**(code **)(param_1 + 0x33c))(param_1,uVar4,&local_30);
          uVar5 = (uint)local_30 & ~(uint)*(ushort *)(param_1 + 0xf4);
          uVar7 = uVar7 & *(ushort *)(param_1 + 0xf4) | uVar5;
          local_30 = (ushort)uVar5;
        }
        if (uVar4 == *(uint *)(param_1 + 0x2a8)) {
          uVar7 = uVar7 & *(uint *)(param_1 + 0x2ac);
        }
        if (uVar4 == *(uint *)(param_1 + 0x18c)) {
          uVar3 = (**(code **)(param_1 + 0x358))
                            ((uVar7 & ~*(uint *)(param_1 + 400)) >>
                             (*(uint *)(param_1 + 0x194) & 0xff) & 0xffff);
          *(undefined4 *)(param_1 + 0x198) = uVar3;
        }
        iVar1 = (**(code **)(param_1 + 0x338))(param_1,uVar4,uVar7);
        if (iVar1 < 0) break;
        uVar6 = uVar6 + 2;
        puVar10 = puVar10 + 2;
      } while ((int)uVar6 < (int)uVar8);
    }
    (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0xe0),&local_2e);
    *(uint *)(param_1 + 0x188) =
         (uint)(((uint)local_2e & ~*(uint *)(param_1 + 0x180)) == *(uint *)(param_1 + 0x184));
    (**(code **)(param_1 + 0x354))(param_1,param_1 + 0x198);
    if (*(char *)(param_1 + 0xac) == '\0') {
      (**(code **)(param_1 + 0x350))
                (param_1,*(int *)(param_1 + 0x1a0) + *(int *)(param_1 + 0x198) & 0xffff);
    }
    else {
      (**(code **)(param_1 + 0x350))(param_1,*(undefined2 *)(param_1 + 0x19c));
    }
    local_2e = 0;
    iVar1 = (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0x1a4),&local_2e);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x401,DAT_2c4aba3c,DAT_2c4aba44,DAT_2c4aba40,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4aba38);
    }
    *(bool *)(param_1 + 0xad) = ((uint)local_2e & ~*(uint *)(param_1 + 0x1a8)) != 0;
    FUN_2c4aa5dc(param_1,1);
    if (*(char *)(param_1 + 0xad) == '\0') {
      FUN_2c4ab4ec(param_1);
    }
    FUN_2c4aa550(param_1,0);
    if (param_2 != 0) {
      local_2e = 0;
      FUN_2c4a94d0();
      (**(code **)(param_1 + 0x330))(param_1,*(undefined1 *)(param_1 + 0x1cc),0x5555);
      (**(code **)(param_1 + 0x334))(param_1,*(undefined1 *)(param_1 + 0x1cc),&local_2e);
      if (local_2e != 0x5555) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x55d,DAT_2c4aba3c,DAT_2c4aba44,DAT_2c4aba6c,*(undefined1 *)(param_1 + 0xa0),
              DAT_2c4aba50,local_2e,0x5555);
      }
      (**(code **)(param_1 + 0x330))(param_1,*(undefined1 *)(param_1 + 0x1cc),0xaaaa);
      (**(code **)(param_1 + 0x334))(param_1,*(undefined1 *)(param_1 + 0x1cc),&local_2e);
      if (local_2e != 0xaaaa) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x567,DAT_2c4aba3c,DAT_2c4aba44,DAT_2c4aba64,*(undefined1 *)(param_1 + 0xa0),
              DAT_2c4aba50,local_2e,0xaaaa);
      }
      (**(code **)(param_1 + 0x330))
                (param_1,*(undefined1 *)(param_1 + 0x1cc),*(undefined2 *)(param_1 + 0x1d4));
      (**(code **)(param_1 + 0x330))(param_1,*(undefined1 *)(param_1 + 0x1d0),0xaaaa);
      (**(code **)(param_1 + 0x330))
                (param_1,*(undefined1 *)(param_1 + 0x1cc),*(undefined2 *)(param_1 + 0x1d4));
      (**(code **)(param_1 + 0x334))(param_1,*(undefined1 *)(param_1 + 0x1d0),&local_2e);
      if (local_2e != 0xaaaa) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x576,DAT_2c4aba3c,DAT_2c4aba44,DAT_2c4aba68,*(undefined1 *)(param_1 + 0xa0),
              DAT_2c4aba50,local_2e,0xaaaa);
      }
      (**(code **)(param_1 + 0x330))
                (param_1,*(undefined1 *)(param_1 + 0x1cc),*(undefined2 *)(param_1 + 0x1d8));
      (**(code **)(param_1 + 0x330))(param_1,*(undefined1 *)(param_1 + 0x1d0),0x5555);
      (**(code **)(param_1 + 0x330))
                (param_1,*(undefined1 *)(param_1 + 0x1cc),*(undefined2 *)(param_1 + 0x1d8));
      (**(code **)(param_1 + 0x334))(param_1,*(undefined1 *)(param_1 + 0x1d0),&local_2e);
      if (local_2e != 0x5555) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x585,DAT_2c4aba3c,DAT_2c4aba44,DAT_2c4aba54,*(undefined1 *)(param_1 + 0xa0),
              DAT_2c4aba50,local_2e,0x5555);
      }
      FUN_2c4a94e0();
      iVar1 = FUN_2c4aa970(param_1);
      if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x5b6,DAT_2c4aba3c,DAT_2c4aba44,DAT_2c4aba4c,*(undefined1 *)(param_1 + 0xa0),
              DAT_2c4aba48);
      }
    }
    iVar1 = FUN_2c4aac50(param_1);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x5be,DAT_2c4ab91c,DAT_2c4ab918,DAT_2c4ab928,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ab920);
    }
    FUN_2c4aa550(param_1,1);
    FUN_2c66c568(param_1 + 4,iVar9,0x32);
  }
  if (*DAT_2c4ab90c == local_2c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

