/* FUN_100a2de0 @ 0x100a2de0 */

undefined4 FUN_100a2de0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*DAT_100a2e04;
  puVar1 = puVar2 + 4;
  FUN_1011dbf4(puVar1,0xffffffff);
  *puVar2 = param_1;
  thunk_FUN_10113e2c(puVar1);
  return 0;
}

