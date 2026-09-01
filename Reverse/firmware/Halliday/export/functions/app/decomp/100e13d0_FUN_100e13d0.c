/* FUN_100e13d0 @ 0x100e13d0 */

void FUN_100e13d0(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
                 short param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  
  iVar1 = FUN_1013401c(DAT_100e1434,0,0xffffffff,0xffffffff);
  puVar2 = (undefined1 *)FUN_100c1fe4(iVar1 + 8,4);
  *puVar2 = 3;
  puVar2[1] = (char)param_4;
  puVar2[2] = 8;
  puVar2[3] = 0;
  puVar3 = (undefined2 *)FUN_100c1fe4(iVar1 + 8);
  puVar3[2] = param_5;
  *puVar3 = param_3;
  puVar3[1] = param_2;
  puVar3[3] = (ushort)(param_5 == 1);
  FUN_10138146(param_1,1,iVar1,param_4);
  return;
}

