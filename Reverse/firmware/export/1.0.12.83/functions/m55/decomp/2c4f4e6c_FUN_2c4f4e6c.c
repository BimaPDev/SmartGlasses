/* FUN_2c4f4e6c @ 0x2c4f4e6c */

void FUN_2c4f4e6c(void)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  int local_38;
  ushort *local_34;
  undefined4 local_2c;
  
  puVar6 = DAT_2c4f4f70;
  puVar5 = DAT_2c4f4f6c;
  puVar4 = DAT_2c4f4f58;
  puVar3 = DAT_2c4f4f54;
  puVar9 = (ushort *)0x0;
  uVar10 = DAT_2c4f4f40 - (int)DAT_2c4f4f6c;
  local_2c = *DAT_2c4f4f48;
  uVar2 = (ulonglong)DAT_2c4f4f44;
  uVar8 = (uint)(DAT_2c4f4f4c - (int)DAT_2c4f4f50) >> 5;
  do {
    FUN_2c644324(&local_38,*puVar3,0xffffffff);
    if (local_38 == 0x20) {
      puVar9 = local_34;
    }
    uVar1 = *puVar9;
    if (uVar1 >> 8 == 0) {
      if (uVar8 == 0) {
LAB_2c4f4f34:
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4f4f60,DAT_2c4f4f68,uVar1);
      }
      uVar11 = 0;
      puVar7 = DAT_2c4f4f50;
      while (*puVar7 != uVar1) {
        uVar11 = uVar11 + 1;
        puVar7 = puVar7 + 0x10;
        if (uVar11 == uVar8) goto LAB_2c4f4f34;
      }
      (**(code **)(puVar7 + 4))(*(undefined4 *)(puVar9 + 2),puVar9[1]);
    }
    else {
      if (uVar1 >> 8 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4f4f5c);
      }
      if (uVar10 < 0xc) {
LAB_2c4f4f2a:
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4f4f60,DAT_2c4f4f64,uVar1);
      }
      uVar11 = 0;
      puVar7 = puVar5;
      while (*puVar7 != uVar1) {
        uVar11 = uVar11 + 1;
        puVar7 = puVar7 + 6;
        if ((uint)(uVar2 * uVar10 >> 0x23) <= uVar11) goto LAB_2c4f4f2a;
      }
      (**(code **)(puVar7 + 2))(*(undefined4 *)(puVar9 + 2),puVar9[1]);
    }
    if (*(int *)(puVar9 + 2) != 0) {
      FUN_2c4c2df4(*puVar6);
    }
    FUN_2c644388(*puVar3,puVar9);
    FUN_2c64723c(*puVar4);
  } while( true );
}

