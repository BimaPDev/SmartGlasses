/* FUN_2c4dbd18 @ 0x2c4dbd18 */

/* WARNING: Removing unreachable block (ram,0x2c4dbca2) */
/* WARNING: Removing unreachable block (ram,0x2c4dbc8a) */
/* WARNING: Removing unreachable block (ram,0x2c4dbc84) */
/* WARNING: Removing unreachable block (ram,0x2c4dbc94) */
/* WARNING: Removing unreachable block (ram,0x2c4dbcb0) */
/* WARNING: Removing unreachable block (ram,0x2c4dbcba) */

undefined4 *
FUN_2c4dbd18(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *param_1 = DAT_2c4dbcf8;
  param_1[0x66] = DAT_2c4dbcfc;
  param_1[0x6e] = DAT_2c4dbd00;
  param_1[0x72] = DAT_2c4dbd04;
  uVar1 = DAT_2c4dbd08;
  param_1[0x2a] = DAT_2c4dbd08;
  FUN_2c4dbc72(param_1,DAT_2c4dbd0c,0,uVar1,param_4);
  FUN_2c4dd428(param_1 + 0x66);
  return param_1;
}

