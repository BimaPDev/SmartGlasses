/* FUN_100a9cc0 @ 0x100a9cc0 */

undefined4 FUN_100a9cc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 == 5) {
    uVar1 = 0x14a;
    puVar2 = DAT_100a9d0c;
  }
  else {
    uVar1 = 0x400;
    puVar2 = DAT_100a9d00;
    if (param_1 != 6) {
      puVar2 = DAT_100a9cfc;
    }
  }
  FUN_10119dc2(DAT_100a9d08,DAT_100a9d04,0x29,puVar2,uVar1,param_3,param_4);
  *puVar2 = param_3;
  return 0;
}

