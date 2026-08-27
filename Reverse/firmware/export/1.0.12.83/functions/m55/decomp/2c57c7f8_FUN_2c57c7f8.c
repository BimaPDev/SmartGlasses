/* FUN_2c57c7f8 @ 0x2c57c7f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c57c7f8(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uStack_50;
  undefined1 *puStack_4c;
  uint uStack_48;
  undefined1 auStack_44 [16];
  uint *puStack_34;
  uint uStack_30;
  uint auStack_2c [4];
  int iStack_1c;
  
  piVar2 = _LAB_2c57c930;
  iStack_1c = *_LAB_2c57c92c;
  if (*_LAB_2c57c930 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  piVar2 = (int *)FUN_2c47245c(0,0x90);
  FUN_2c674268(piVar2,0,0x90);
  *piVar2 = _LAB_2c57c934;
  piVar2[1] = (int)(piVar2 + 3);
  piVar2[7] = (int)(piVar2 + 9);
  piVar2[0x13] = (int)(piVar2 + 0x15);
  piVar2[0xd] = (int)(piVar2 + 0xf);
  *(undefined1 *)(piVar2 + 3) = 0;
  *(undefined1 *)(piVar2 + 9) = 0;
  *(undefined1 *)(piVar2 + 0xf) = 0;
  *(undefined1 *)(piVar2 + 0x15) = 0;
  *(undefined1 *)(piVar2 + 0x1c) = 0;
  piVar2[0x1a] = (int)(piVar2 + 0x1c);
  FUN_2c539348(piVar2 + 0x13,0,0,_LAB_2c57c938,6);
  func_0x2c57ae18(*(undefined4 *)(param_1 + 0x24));
  FUN_2c58c9d8(&puStack_4c,piVar2);
  puVar1 = puStack_4c;
  puStack_34 = auStack_2c;
  if ((puStack_4c + uStack_48 != (undefined1 *)0x0) && (puStack_4c == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c57c93c);
  }
  uStack_50 = uStack_48;
  if (uStack_48 < 0x10) {
    if (uStack_48 == 1) {
      auStack_2c[0] = CONCAT31(auStack_2c[0]._1_3_,*puStack_4c);
      goto LAB_2c57c8a0;
    }
    if (uStack_48 == 0) goto LAB_2c57c8a0;
  }
  else {
    puStack_34 = (uint *)FUN_2c57b828(&uStack_50,0);
    auStack_2c[0] = uStack_50;
  }
  FUN_2c674668(puStack_34,puVar1,uStack_48);
LAB_2c57c8a0:
  *(undefined1 *)((int)puStack_34 + uStack_50) = 0;
  uStack_30 = uStack_50;
  FUN_2c57c468(param_1,&puStack_34);
  if (puStack_34 != auStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  FUN_2c5921a0(param_1);
  if (puStack_4c == auStack_44) {
    (**(code **)(*piVar2 + 8))(piVar2);
    if (*_LAB_2c57c92c != iStack_1c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

