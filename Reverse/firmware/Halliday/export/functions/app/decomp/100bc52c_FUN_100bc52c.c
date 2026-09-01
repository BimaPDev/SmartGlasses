/* FUN_100bc52c @ 0x100bc52c */

undefined4 FUN_100bc52c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_100bc564;
  FUN_100a5b78((DAT_100bc55c - DAT_100bc560) * 0x20 & 0xff00U | 0x9e0032,DAT_100bc56c,DAT_100bc568,
               *(undefined4 *)(DAT_100bc564 + 4),param_1,param_2);
  *(undefined4 *)(iVar1 + 4) = param_1;
  return 0;
}

