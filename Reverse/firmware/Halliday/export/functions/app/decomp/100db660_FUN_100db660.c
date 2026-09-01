/* FUN_100db660 @ 0x100db660 */

undefined4 FUN_100db660(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_100db6a4;
  FUN_100a5b78(DAT_100db698 | (DAT_100db694 - DAT_100db690) * 0x20 & 0xff00U,DAT_100db6a0,
               DAT_100db69c,param_1);
  uVar2 = DAT_100db6a8;
  *puVar1 = 0;
  FUN_10131ebe(uVar2);
  *puVar1 = param_1;
  return 0;
}

