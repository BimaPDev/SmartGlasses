/* FUN_1405db18 @ 0x1405db18 */

undefined4 FUN_1405db18(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)FUN_14074378(0xd01,0,param_3,4,param_4);
  uVar1 = *(undefined2 *)(param_2 + -2);
  puVar2[1] = (short)param_4;
  *puVar2 = uVar1;
  FUN_140743d0();
  return 0;
}

