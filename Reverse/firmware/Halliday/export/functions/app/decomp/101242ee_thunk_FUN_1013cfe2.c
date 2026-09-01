/* thunk_FUN_1013cfe2 @ 0x101242ee */

/* WARNING: Removing unreachable block (ram,0x101163fa) */
/* WARNING: Removing unreachable block (ram,0x1011641e) */

undefined4 * thunk_FUN_1013cfe2(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_r2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar1 = DAT_10116464;
  if ((param_1 < 0xfffffffc) &&
     (uVar4 = FUN_101132fc(DAT_10116464,4,param_1 + 4,4,0,0), puVar2 = (undefined4 *)uVar4,
     puVar2 != (undefined4 *)0x0)) {
    puVar3 = puVar2 + 1;
    *puVar2 = uVar1;
    if (((uint)puVar3 & 3) != 0) {
      FUN_10119dc2(DAT_101163e4,DAT_101163e0,DAT_101163dc,0x25,uVar4);
      FUN_10119dc2(DAT_101163e8,puVar3,4);
      FUN_1011a1f0(DAT_101163dc,0x25,extraout_r2,3);
    }
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}

