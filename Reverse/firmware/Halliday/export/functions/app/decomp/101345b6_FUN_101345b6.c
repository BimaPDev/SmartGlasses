/* FUN_101345b6 @ 0x101345b6 */

undefined4 FUN_101345b6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_100c1fe4(param_1 + 8,2,param_3,param_4,param_4);
  puVar1[1] = 0;
  *puVar1 = 0xf7;
  return 0;
}

