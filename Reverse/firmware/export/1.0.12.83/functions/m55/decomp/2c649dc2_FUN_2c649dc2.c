/* FUN_2c649dc2 @ 0x2c649dc2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c649dc2(undefined4 param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = FUN_2c6684cc(*(undefined4 *)(param_2 + 4));
  iVar5 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8));
  iVar6 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0xc));
  FUN_2c4bffe4(0,_LAB_2c649e74);
  FUN_2c4bffb0(0,iVar5);
  FUN_2c4bfee0(0);
  FUN_2c648600(_LAB_2c649e7c,_LAB_2c649e78,iVar5);
  uVar3 = _LAB_2c649e98;
  uVar2 = _LAB_2c649e94;
  pcVar1 = _DAT_2c649e80;
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    FUN_2c648600(uVar2,iVar4);
    FUN_2c673e08(iVar4 << 4);
    FUN_2c4bff98(0);
    *pcVar1 = *pcVar1 + '\x01';
    FUN_2c648600(uVar3);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x3c,_LAB_2c649e88,_LAB_2c649e8c,_LAB_2c649e84,iVar5 * 1000);
}

