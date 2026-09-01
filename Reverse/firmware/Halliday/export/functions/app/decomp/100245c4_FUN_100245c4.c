/* FUN_100245c4 @ 0x100245c4 */

undefined4 FUN_100245c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar5 = 0;
  local_24 = *DAT_10024704;
  local_2c = 0;
  FUN_100434c0(&local_2c,param_2,param_3,0);
  iVar4 = *DAT_10024708;
  if (iVar4 != 0) {
    FUN_10124cea(*(undefined4 *)(iVar4 + 0x18),1);
    FUN_10124cea(*(undefined4 *)(iVar4 + 0x14),1);
    FUN_10124cea(*(undefined4 *)(iVar4 + 0x30),1);
    FUN_10124cea(*(undefined4 *)(iVar4 + 0x2c),1);
    FUN_1002efe4();
    FUN_10024260();
    unaff_r8 = *(undefined4 *)(iVar4 + 0x24);
    unaff_r9 = *(undefined4 *)(iVar4 + 0x204);
    uVar1 = FUN_10126fd2(unaff_r8);
    unaff_r5 = uVar1 & 0xff;
    if (unaff_r5 != 0) goto LAB_1002463e;
    FUN_10124c20(*(undefined4 *)(iVar4 + 0x1c),1);
    FUN_10124cea(*(undefined4 *)(iVar4 + 0x28),1);
  }
  while (*DAT_10024704 != local_24) {
    FUN_1013cdc0();
LAB_1002463e:
    uVar2 = FUN_10087308();
    FUN_1008740c(uVar2,*(undefined4 *)(iVar4 + 0x2c));
    do {
      iVar3 = FUN_10126fb4(unaff_r8,uVar5);
      if (*(uint *)(iVar3 + 0x10) < unaff_r5) {
        uVar2 = FUN_10087308();
        FUN_1008740c(uVar2,iVar3);
        FUN_10124cea(iVar3,0x400);
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xff) < unaff_r5);
    if ((int)unaff_r5 <= *(int *)(iVar4 + 0x204)) {
      *(undefined4 *)(iVar4 + 0x204) = 0;
    }
    FUN_10089bf8(unaff_r8);
    iVar3 = FUN_10126fb4(unaff_r8,unaff_r9);
    if (iVar3 != 0) {
      FUN_101245ce();
    }
    FUN_10124c20(*(undefined4 *)(iVar4 + 0x2c),1);
    FUN_10124c20(*(undefined4 *)(iVar4 + 0x28),1);
    FUN_10124cea(*(undefined4 *)(iVar4 + 0x1c),1);
    FUN_1012bb5c(*(undefined4 *)(iVar4 + 0x20),0,unaff_r5);
    FUN_1012bb2a(*(undefined4 *)(iVar4 + 0x20),
                 (int)(short)((short)*(undefined4 *)(iVar4 + 0x204) + 1));
    local_28 = 0;
    FUN_100434c0(&local_28);
    if (0x96 < (uint)(local_28 - local_2c)) {
      FUN_100a5b78((DAT_10024710 - DAT_1002470c) * 0x20 & 0xff00U | 0x730032,DAT_10024714,
                   DAT_10024718,local_28 - local_2c,unaff_r5);
    }
  }
  return 0;
}

