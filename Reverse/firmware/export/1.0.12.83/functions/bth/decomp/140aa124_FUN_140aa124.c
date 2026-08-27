/* FUN_140aa124 @ 0x140aa124 */

undefined4 FUN_140aa124(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_140aa160;
  FUN_140e5148(*(undefined4 *)(DAT_140aa160 + 0xd0),0xffffffff);
  cVar1 = *(char *)(iVar2 + 0xd8);
  FUN_140e52d8(*(undefined4 *)(iVar2 + 0xd0));
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x140aa14e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(iVar2 + 0x78))(param_1);
    return uVar3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0xffffffff;
}

