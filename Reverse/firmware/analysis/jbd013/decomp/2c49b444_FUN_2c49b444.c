/* FUN_2c49b444 @ 0x2c49b444 */

void FUN_2c49b444(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined1 local_26 [2];
  int local_24;
  
  uVar4 = DAT_2c49b52c;
  uVar3 = DAT_2c49b528;
  uVar2 = DAT_2c49b524;
  iVar1 = DAT_2c49b518;
  uVar6 = 0;
  local_24 = *DAT_2c49b514;
  puVar7 = &local_3c;
  local_3c = *LAB_2c49b520;
  uStack_38 = LAB_2c49b520[1];
  uStack_34 = LAB_2c49b520[2];
  uStack_30 = LAB_2c49b520[3];
  uStack_2c = LAB_2c49b520[4];
  uStack_28 = (undefined2)LAB_2c49b520[5];
  local_26[0] = (undefined1)((uint)LAB_2c49b520[5] >> 0x10);
  while( true ) {
    local_3d = 0;
    uVar5 = FUN_2c49b318(uVar6,&local_3d);
    if (*(int *)(iVar1 + 4) != 1) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x234,uVar4,uVar3,uVar2,uVar6,local_3d,uVar5);
    }
    FUN_2c648600(DAT_2c49b51c,uVar6,local_3d,uVar5);
    if (puVar7 == (undefined4 *)local_26) break;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    uVar6 = *(undefined1 *)puVar7;
  }
  FUN_2c49b2c0(0x40,0xff);
  FUN_2c49b2c0(0x41,0xff);
  FUN_2c49b2c0(0x42,0xff);
  FUN_2c49b2c0(0x43,0xff);
  FUN_2c49b2c0(0x44,0xff);
  if (*DAT_2c49b514 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

