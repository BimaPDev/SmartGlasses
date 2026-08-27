/* FUN_2c507534 @ 0x2c507534 */

void FUN_2c507534(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_2c504998();
  FUN_2c504c98(uVar1,param_1 + 0x10);
  uVar1 = FUN_2c504998();
  FUN_2c504b54(uVar1,0);
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x14),1);
  }
  FUN_2c504998();
  iVar2 = FUN_2c504a0c();
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_2c606abc(*(int *)(param_1 + 0x28),1);
    }
    FUN_2c504998();
    uVar1 = FUN_2c504a44();
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c50774c,0x128,DAT_2c507748,DAT_2c507744,uVar1);
  }
  FUN_2c504998();
  iVar2 = FUN_2c504acc();
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_2c606abc(*(int *)(param_1 + 0x4c),1);
    }
    FUN_2c504998();
    uVar1 = FUN_2c504b10();
    FUN_2c638730(*(undefined4 *)(param_1 + 0x4c),uVar1);
    FUN_2c504998();
    iVar2 = FUN_2c504af0();
    if (iVar2 == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x54);
      uVar1 = FUN_2c5e2e4c(DAT_2c507758);
      FUN_2c63140c(uVar3,uVar1);
      FUN_2c606e2c(*(undefined4 *)(param_1 + 0x58),0x66,0);
      uVar3 = *(undefined4 *)(param_1 + 0x58);
      uVar1 = registry_lookup(DAT_2c50775c);
      FUN_2c638730(uVar3,uVar1);
    }
  }
  FUN_2c504998();
  iVar2 = FUN_2c504a0c();
  if (iVar2 == 0) {
LAB_2c50764c:
    FUN_2c504998();
    iVar2 = FUN_2c504a0c();
    if (iVar2 != 0) {
      FUN_2c504998();
      iVar2 = FUN_2c504acc();
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x66) = 1;
        *(undefined4 *)(param_1 + 0x68) = 1;
        FUN_2c6072bc(*(undefined4 *)(param_1 + 0x18),2,0,0x5c);
        iVar2 = *(int *)(param_1 + 0x18);
        goto joined_r0x2c50772a;
      }
    }
    FUN_2c504998();
    iVar2 = FUN_2c504a0c();
    if (iVar2 == 0) {
      FUN_2c504998();
      iVar2 = FUN_2c504acc();
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x66) = 2;
        *(undefined4 *)(param_1 + 0x68) = 1;
        FUN_2c6072bc(*(undefined4 *)(param_1 + 0x3c),2,0,0x5c);
        if (*(int *)(param_1 + 0x3c) != 0) {
          FUN_2c606abc(*(int *)(param_1 + 0x3c),1);
        }
      }
    }
LAB_2c50760c:
    if (*(char *)(param_1 + 0x66) != '\x01') {
      if (*(char *)(param_1 + 0x66) == '\x02') {
        FUN_2c5074dc(param_1,1);
        FUN_2c507484(param_1,2);
      }
      goto LAB_2c50761a;
    }
  }
  else {
    FUN_2c504998();
    iVar2 = FUN_2c504acc();
    if (iVar2 == 0) goto LAB_2c50764c;
    *(undefined1 *)(param_1 + 0x66) = 1;
    *(undefined4 *)(param_1 + 0x68) = 2;
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_2c606abc();
      iVar2 = *(int *)(param_1 + 0x3c);
joined_r0x2c50772a:
      if (iVar2 == 0) goto LAB_2c50760c;
LAB_2c507606:
      FUN_2c606abc(iVar2,1);
      goto LAB_2c50760c;
    }
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 != 0) goto LAB_2c507606;
  }
  FUN_2c507484(param_1,1);
  FUN_2c5074dc(param_1,2);
LAB_2c50761a:
  uVar1 = DAT_2c507750;
  *(undefined1 *)(param_1 + 0x65) = 1;
  FUN_2c5eb89c(DAT_2c507754,*(undefined4 *)(param_1 + 0x5c),0,uVar1,param_1);
  FUN_2c5eb89c(DAT_2c507754,*(undefined4 *)(param_1 + 0x38),0,DAT_2c507750,param_1);
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x60),1);
    return;
  }
  return;
}

