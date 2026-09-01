/* FUN_100730f4 @ 0x100730f4 */

undefined4 FUN_100730f4(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iStack_28;
  uint uStack_24;
  
  iStack_28 = param_3;
  uStack_24 = param_4;
  FUN_1011f7be(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),param_3,param_4,
               param_1,param_2);
  uVar3 = param_3 + 0x10;
  iVar4 = param_2 + 0x10;
  do {
    if (param_4 + param_3 <= uVar3) {
LAB_10073154:
      *(int *)(param_1 + 0x28) = iVar4;
      return 0;
    }
    FUN_10072994(param_1,uVar3,&iStack_28);
    iVar1 = FUN_10072c94(param_1,uVar3,&iStack_28,param_5);
    if ((iVar1 == 3) || (iVar1 == 0)) {
      FUN_100a5b78(DAT_1007319c | (DAT_10073198 - DAT_10073194) * 0x20 & 0xff00U,DAT_100731a4,
                   DAT_100731a0,uVar3,iVar1);
      goto LAB_10073154;
    }
    iVar2 = (uStack_24 >> 8 & 0xff) + (uStack_24 >> 0x10);
    uVar5 = iVar2 + 0x17U & 0xfffffff0;
    if (iVar1 == 1) {
      FUN_10072aa4(param_1,uVar3,iVar4,iVar2 + 8);
      FUN_1011f77e(*(undefined4 *)(param_1 + 0x30),iVar4 - param_2,1);
      iVar4 = iVar4 + uVar5;
    }
    uVar3 = uVar3 + uVar5;
  } while( true );
}

