/* FUN_2c5712c4 @ 0x2c5712c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5712c4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_r6;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  undefined1 *puStack_3c;
  int iStack_38;
  undefined1 auStack_34 [16];
  int iStack_24;
  
  iStack_24 = *_LAB_2c5715a8;
  if (param_3 != 0xf) {
    uVar1 = FUN_2c637344(param_2,param_2,param_3,0);
    FUN_2c607048(uVar1,0x3c,0x1c);
    FUN_2c606d18(uVar1,3,0);
    FUN_2c606d24(uVar1,3,0);
    FUN_2c606d9c(uVar1,0);
    uVar2 = func_0x2c571da8(*(undefined4 *)(param_1 + 8),param_3);
    uVar3 = func_0x2c571db4(*(undefined4 *)(param_1 + 8),param_3);
    FUN_2c638814(uVar1,_LAB_2c5715ac,uVar2,uVar3);
    uVar2 = FUN_2c5e2e80(_LAB_2c5715b0);
    FUN_2c606e38(uVar1,uVar2,0);
    FUN_2c606e20(uVar1,0xff00ff00,0);
    FUN_2c606f34(uVar1,0x10,0xc);
    uVar3 = FUN_2c6313f4(param_2);
    FUN_2c603a04(uVar3,0,_DAT_2c5715b4);
    FUN_2c607048(uVar3,0x28,0x16);
    iVar4 = func_0x2c571dc0(*(undefined4 *)(param_1 + 8),param_3);
    uVar2 = _LAB_2c5715b8;
    if (iVar4 == 0) {
      uVar2 = _LAB_2c5715bc;
    }
    uVar2 = FUN_2c5e2e8c(uVar2);
    FUN_2c63140c(uVar3,uVar2);
    FUN_2c6072bc(uVar3,3,0xfffffff0,0xf);
    uVar2 = FUN_2c637344(param_2);
    FUN_2c60710c(uVar2,0x18);
    FUN_2c606d18(uVar2,3,0);
    FUN_2c606d24(uVar2,3,0);
    FUN_2c606d9c(uVar2,0,0);
    auStack_4c[0] = 0;
    uStack_50 = 0;
    puStack_54 = auStack_4c;
    FUN_2c572ed0(*(undefined4 *)(param_1 + 8),param_3,&puStack_54);
    FUN_2c638730(uVar2,puStack_54);
    uVar3 = FUN_2c5e2e80(_LAB_2c5715c0);
    FUN_2c606e38(uVar2,uVar3,0);
    FUN_2c606e20(uVar2,0xff00ff00,0);
    FUN_2c606e2c(uVar2,0x99,0);
    FUN_2c608808(uVar2,uVar1,0xd,0,6);
    FUN_2c6070bc(uVar2,0x27d1);
    auStack_34[0] = 0;
    iStack_38 = 0;
    puStack_3c = auStack_34;
    func_0x2c572410(*(undefined4 *)(param_1 + 8),param_3,&puStack_3c);
    if (iStack_38 != 0) {
      uVar1 = FUN_2c6313f4(param_2);
      FUN_2c603a04(uVar1,0,_DAT_2c5715b4);
      FUN_2c607048(uVar1,2,0x12);
      uVar3 = FUN_2c5e2e8c(_LAB_2c5715c4);
      FUN_2c63140c(uVar1,uVar3);
      FUN_2c608808(uVar1,uVar2,0x14,7,0);
      uVar2 = FUN_2c637344(param_2);
      FUN_2c60710c(uVar2,0x18);
      FUN_2c606d18(uVar2,3,0);
      FUN_2c606d24(uVar2,3,0);
      FUN_2c606d9c(uVar2,0,0);
      uVar3 = FUN_2c5e2e80(_LAB_2c5715c0);
      FUN_2c606e38(uVar2,uVar3,0);
      FUN_2c606e20(uVar2,0xff00ff00,0);
      FUN_2c606e2c(uVar2,0x99,0);
      FUN_2c608808(uVar2,uVar1,0x14,7,0);
      FUN_2c6070bc(uVar2,0xb8);
      FUN_2c6388dc(uVar2,1);
      FUN_2c638730(uVar2,puStack_3c);
    }
    if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_54 != auStack_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*_LAB_2c5715a8 == iStack_24) {
      return;
    }
LAB_2c5715a2:
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  uVar2 = FUN_2c637344(param_2,param_2,0xf,0);
  FUN_2c607048(uVar2,0x70,0x14);
  FUN_2c606d18(uVar2,2,0);
  FUN_2c606d24(uVar2,2,0);
  FUN_2c606d9c(uVar2,0);
  FUN_2c638730(uVar2,_LAB_2c5715c8);
  uVar1 = FUN_2c5e2e80(_LAB_2c5715c0);
  FUN_2c606e38(uVar2,uVar1,0);
  FUN_2c606e20(uVar2,0xff00ff00,0);
  if (*_LAB_2c5715a8 != iStack_24) goto LAB_2c5715a2;
  iVar5 = *DAT_2c606fa4;
  iVar4 = FUN_2c603c78(uVar2,7,&stack0xffffffe8,0);
  if (iVar4 == 1) {
    if (unaff_r6 != 0x28) goto LAB_2c606f58;
  }
  else if (iVar4 == 0) {
LAB_2c606f58:
    FUN_2c606cc4(uVar2,0x28,0);
  }
  iVar4 = FUN_2c603c78(uVar2,8,&stack0xffffffe8,0);
  if (iVar4 == 1) {
    if (unaff_r6 == 0x1c) goto LAB_2c606f7e;
  }
  else if (iVar4 != 0) goto LAB_2c606f7e;
  FUN_2c606cd0(uVar2,0x1c,0);
LAB_2c606f7e:
  if (*DAT_2c606fa4 == iVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

