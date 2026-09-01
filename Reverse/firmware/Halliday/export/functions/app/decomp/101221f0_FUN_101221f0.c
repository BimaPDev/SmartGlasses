/* FUN_101221f0 @ 0x101221f0 */

undefined4 FUN_101221f0(undefined1 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100832fc(*(ushort *)(param_1 + 6) + 0x76c,(byte)param_1[4] + 1,param_1[3],param_1[2],
                       param_1[1],*param_1,param_3);
  *param_2 = uVar1;
  return 0;
}

