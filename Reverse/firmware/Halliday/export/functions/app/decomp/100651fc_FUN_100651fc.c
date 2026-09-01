/* FUN_100651fc @ 0x100651fc */

undefined4 * FUN_100651fc(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_30 [36];
  
  puVar1 = (undefined4 *)thunk_FUN_1009f30c(0x18,DAT_10065264);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10118a1c(auStack_30,0x20,DAT_10065268,DAT_1006526c,param_1);
    iVar2 = FUN_1006ba84(puVar1 + 1,auStack_30,1);
    if (iVar2 == 0) {
      *puVar1 = param_1;
      puVar1[4] = 0x1000;
    }
    else {
      FUN_100a5b78((DAT_10065274 - DAT_10065270) * 0x20 & 0xff00U | 0x1c0011,DAT_1006527c,
                   DAT_10065278,auStack_30);
      puVar1[4] = 0;
      FUN_1012d1f4(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}

