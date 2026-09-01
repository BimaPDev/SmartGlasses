/* FUN_100794fc @ 0x100794fc */

undefined4 FUN_100794fc(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)**(undefined4 **)(param_1 + 4);
  puVar1[1] = 0;
  puVar1[2] = puVar1[2];
  *puVar1 = DAT_1007951c & *puVar1;
  FUN_10055c2c(0x13);
  return 0;
}

