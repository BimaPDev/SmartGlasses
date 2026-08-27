/* FUN_2c62f908 @ 0x2c62f908 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62f908(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *puStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined4 uStack_63;
  undefined1 uStack_5f;
  undefined1 auStack_5c [20];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  undefined1 auStack_3d [41];
  int iStack_14;
  
  puVar3 = _LAB_2c62fa04;
  iStack_14 = *_LAB_2c62fa00;
  uStack_98 = 0;
  uStack_48 = *_LAB_2c62fa04;
  uStack_44 = _LAB_2c62fa04[1];
  puVar4 = _LAB_2c62fa04 + 0xd;
  uStack_40 = (undefined2)_LAB_2c62fa04[2];
  uStack_3e = (undefined1)((uint)_LAB_2c62fa04[2] >> 0x10);
  FUN_2c674268(auStack_3d,0,0x27);
  uStack_63 = 0;
  uStack_5f = 0;
  uStack_68 = *puVar4;
  uStack_64 = (undefined1)puVar3[0xe];
  uStack_90 = func_0x2c66d694(0);
  uVar1 = FUN_2c669224(&uStack_90);
  thunk_FUN_2c66bb40(auStack_5c,0x14,_LAB_2c62fa08,uVar1);
  iVar2 = FUN_2c66c4ec(&uStack_48);
  puVar3 = (undefined4 *)func_0x2c66b5da((int)&uStack_48 + iVar2,auStack_5c);
  *puVar3 = uStack_68;
  *(undefined1 *)(puVar3 + 1) = uStack_64;
  uVar1 = func_0x2c4b4e54();
  iVar2 = FUN_2c62109c(uVar1,0x1d0,0x1c6,&uStack_98,&uStack_94);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c62fa14,0x35,_LAB_2c62fa10,_LAB_2c62fa0c);
  }
  FUN_2c674268(&uStack_88,0,0x20);
  uStack_88 = CONCAT31(uStack_88._1_3_,2);
  uStack_84 = uStack_98;
  puStack_78 = &uStack_48;
  uStack_80 = uStack_94;
  iVar2 = FUN_2c478b68();
  (**(code **)(iVar2 + 0x4c))
            (uStack_88,uStack_84,uStack_80,uStack_7c,puStack_78,uStack_74,uStack_70,uStack_6c);
  FUN_2c62bea8(uStack_98);
  if (*_LAB_2c62fa00 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

