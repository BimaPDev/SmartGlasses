/* FUN_1002bc80 @ 0x1002bc80 */

int FUN_1002bc80(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *DAT_1002bdc0;
  FUN_100a5b78((DAT_1002bdb8 - DAT_1002bdbc) * 0x20 & 0xff00U | 0x12c0032,DAT_1002bdc8,DAT_1002bdc4,
               param_2 + 0x14,*param_2);
  iVar2 = 0;
  if (*param_2 != '\0') {
    iVar5 = *DAT_1002bdcc;
    uVar1 = FUN_10126fd2(param_1);
    iVar2 = FUN_1002ed68(param_1);
    FUN_1012569c(iVar2,0x104,DAT_1002bdd0);
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    iVar3 = FUN_10096618(iVar2);
    if (*param_2 == '\x01') {
      FUN_10124c94();
    }
    FUN_10125640(iVar3,DAT_1002bdd4);
    FUN_101256e8(iVar3,7,10,4);
    FUN_10096630(iVar3,param_2 + 0x14);
    FUN_10126e78(iVar3,8,0);
    FUN_10126eb6(iVar3,0xffffffff,0x20000);
    FUN_10126ed6(iVar3,0xff,0x20000);
    FUN_10126ee0(iVar3,1,0x20000);
    FUN_1008a9a8(iVar3,iVar5 + 0x24,DAT_1002bdd8);
    FUN_10087374(iVar3);
    *(uint *)(iVar3 + 0x10) = (uint)(byte)param_2[1];
    uVar1 = FUN_10096f4c(iVar2);
    FUN_10126f52(uVar1,iVar5 + 0x8c,0);
    FUN_101256e8(uVar1,6,0xfffffff2,0);
    FUN_1002bbd0(uVar1,param_2 + 8);
    FUN_10125640(uVar1,DAT_1002bddc);
    FUN_10086fc4(iVar2,DAT_1002bde0,0);
    FUN_10124cea(iVar2,0x400);
  }
  if (*DAT_1002bdc0 != iVar4) {
    FUN_1013cdc0();
  }
  return iVar2;
}

