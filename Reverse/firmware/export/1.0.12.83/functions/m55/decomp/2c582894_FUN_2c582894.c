/* FUN_2c582894 @ 0x2c582894 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c582894(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r6;
  int iVar5;
  
  uVar3 = _LAB_2c582a0c;
  iVar5 = *(int *)(**(int **)(param_1 + 8) + param_3 * 4);
  uVar1 = FUN_2c637344(param_2);
  FUN_2c60710c(uVar1,0x18);
  FUN_2c6070bc(uVar1,0xc);
  FUN_2c606e5c(uVar1,2,0);
  FUN_2c606d18(uVar1,3,0);
  FUN_2c606d24(uVar1,3,0);
  FUN_2c606d9c(uVar1,0);
  FUN_2c638814(uVar1,_LAB_2c582a04,*(undefined4 *)(iVar5 + 4));
  uVar2 = FUN_2c5e2e80(_LAB_2c582a08);
  FUN_2c606e38(uVar1,uVar2,0);
  FUN_2c606e20(uVar1,0xff00ff00,0);
  FUN_2c606f34(uVar1,10,0xe);
  uVar1 = FUN_2c637344(param_2);
  FUN_2c606d18(uVar1,3,0);
  FUN_2c606d24(uVar1,3,0);
  FUN_2c606d9c(uVar1,0);
  FUN_2c606e5c(uVar1,1,0);
  uVar2 = FUN_2c5e2e80(uVar3);
  FUN_2c606e38(uVar1,uVar2,0);
  FUN_2c606e20(uVar1,0xff00ff00,0);
  FUN_2c606f34(uVar1,0x1e,0xc);
  uVar2 = *(undefined4 *)(iVar5 + 8);
  FUN_2c607048(uVar1,0xbe,0x1c);
  FUN_2c6388dc(uVar1,1);
  FUN_2c638730(uVar1,uVar2);
  uVar1 = FUN_2c637344(param_2);
  FUN_2c607048(uVar1,0xde,0x1c);
  FUN_2c606d18(uVar1,3,0);
  FUN_2c606d24(uVar1,3,0);
  FUN_2c606d9c(uVar1,0);
  FUN_2c606e5c(uVar1,1,0);
  FUN_2c638730(uVar1,*(undefined4 *)(iVar5 + 0x20));
  FUN_2c6388dc(uVar1,1);
  uVar3 = FUN_2c5e2e80(uVar3);
  FUN_2c606e38(uVar1,uVar3,0);
  FUN_2c606e74(uVar1,0x99,0);
  FUN_2c606e20(uVar1,0xff00ff00,0);
  iVar4 = *DAT_2c607334;
  FUN_2c606cdc(uVar1,1,0);
  iVar5 = FUN_2c603c78(uVar1,7,&stack0xffffffe8,0);
  if (iVar5 == 1) {
    if (unaff_r6 != 0x1e) goto LAB_2c6072e8;
  }
  else if (iVar5 == 0) {
LAB_2c6072e8:
    FUN_2c606cc4(uVar1,0x1e,0);
  }
  iVar5 = FUN_2c603c78(uVar1,8,&stack0xffffffe8,0);
  if (iVar5 == 1) {
    if (unaff_r6 == 0x28) goto LAB_2c60730e;
  }
  else if (iVar5 != 0) goto LAB_2c60730e;
  FUN_2c606cd0(uVar1,0x28,0);
LAB_2c60730e:
  if (*DAT_2c607334 != iVar4) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

