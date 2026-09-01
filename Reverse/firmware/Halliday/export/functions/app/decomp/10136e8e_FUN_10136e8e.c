/* FUN_10136e8e @ 0x10136e8e */

undefined4 FUN_10136e8e(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)FUN_100dce84(0,param_1);
  if (puVar4 != (undefined1 *)0x0) {
    uVar1 = *puVar4;
    uVar2 = FUN_10131956();
    uVar3 = FUN_100e6f0c(uVar1,param_2,param_3);
    FUN_1013197e(uVar2);
    return uVar3;
  }
  return 0xfffffffb;
}

