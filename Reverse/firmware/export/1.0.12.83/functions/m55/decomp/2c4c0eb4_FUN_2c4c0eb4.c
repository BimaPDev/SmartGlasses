/* FUN_2c4c0eb4 @ 0x2c4c0eb4 */

void FUN_2c4c0eb4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ushort local_1e;
  int local_1c;
  
  local_1c = *DAT_2c4c1018;
  local_1e = 0;
  FUN_2c4bdfe4(0,0xffffffff,0,0);
  FUN_2c4bdfe4(3,0xffffffff,0);
  FUN_2c4bdfe4(4,0xffffffff,0);
  FUN_2c4bdfe4(1,0xffffffff,0);
  FUN_2c4bdfe4(5,0xffffffff,0);
  FUN_2c4bdfe4(6,0xffffffff,0);
  puVar1 = DAT_2c4c101c;
  FUN_2c674638();
  puVar2 = DAT_2c4c1020;
  FUN_2c674478();
  FUN_2c673e08(0x1e0);
  puVar3 = DAT_2c4c1024;
  FUN_2c4bdfa4(0,&local_1e);
  uVar8 = FUN_2c674028(local_1e);
  *puVar3 = uVar8;
  FUN_2c4bdfa4(3,&local_1e);
  uVar8 = FUN_2c673ad8(local_1e);
  *puVar1 = uVar8;
  FUN_2c4bdfa4(4,&local_1e);
  uVar8 = FUN_2c673ad8(local_1e);
  *puVar2 = uVar8;
  FUN_2c4bdfa4(1,&local_1e);
  piVar4 = DAT_2c4c1028;
  *DAT_2c4c1028 = (uint)local_1e << 2;
  FUN_2c4bdfa4(5,&local_1e);
  *DAT_2c4c102c = (uint)local_1e << 2;
  FUN_2c4bdfa4(6,&local_1e);
  piVar7 = DAT_2c4c1040;
  *DAT_2c4c1030 = (uint)local_1e * 5;
  uVar6 = DAT_2c4c103c;
  uVar5 = DAT_2c4c1038;
  uVar8 = DAT_2c4c1034;
  if (*piVar7 == 0) {
    iVar10 = *piVar4;
    uVar11 = *puVar1;
    uVar9 = *puVar3;
    uVar12 = *puVar2;
    *piVar7 = 1;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xfb,uVar6,uVar5,uVar8,uVar9,uVar12,uVar11,iVar10,(uint)local_1e * 5);
  }
  FUN_2c4be268(0);
  FUN_2c4be268(3);
  FUN_2c4be268(4);
  FUN_2c4be268(1);
  FUN_2c4be268(5);
  FUN_2c4be268(6);
  FUN_2c6745b8();
  FUN_2c674708();
  if (*DAT_2c4c1018 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

