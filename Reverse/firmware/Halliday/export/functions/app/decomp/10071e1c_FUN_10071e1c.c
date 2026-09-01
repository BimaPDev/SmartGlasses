/* FUN_10071e1c @ 0x10071e1c */

undefined4 FUN_10071e1c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar3 = FUN_1011f622(DAT_10071f9c);
  if (iVar3 << 0x1f < 0) {
    uVar5 = (DAT_10071fa4 - DAT_10071fa0) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_10071fa8 | uVar5,DAT_10071fb0,DAT_10071fac,uVar5,param_1,param_2);
    iVar3 = FUN_10061fd0(DAT_10071fb4);
    if (iVar3 != 0) {
      FUN_10061f54(DAT_10071fb4);
    }
    piVar1 = DAT_10071fb8;
    (**(code **)(*(int *)(*DAT_10071fb8 + 8) + 0xc))();
    uVar4 = DAT_10071fc0;
    *DAT_10071fbc = 1;
    piVar1[2] = 0;
    thunk_FUN_10113fd0(uVar4);
    *DAT_10071fc4 = 1;
    thunk_FUN_10113fd0(piVar1 + 0xf);
    *DAT_10071fc8 = 1;
    thunk_FUN_10113fd0(piVar1 + 9);
    iVar3 = *piVar1;
    *DAT_10071fcc = 0;
    piVar1[0x20] = 0;
    piVar1[0x21] = 0;
    piVar1[2] = 0;
    FUN_1011f602(iVar3,0,&stack0xffffffef);
    FUN_1011f602(*piVar1,0,&stack0xffffffef);
    FUN_1011f602(*piVar1,0,&stack0xffffffef);
    puVar2 = DAT_10071fd0;
    FUN_1011f602(*piVar1,0,&stack0xffffffef);
    FUN_10114504(DAT_10071fd4,0);
    FUN_1011ec66(*puVar2 + 0x2ff18000);
    *puVar2 = 0;
    FUN_1011ec66(puVar2[6] + 0x2ff18000);
    iVar3 = piVar1[0x1d];
    puVar2[6] = 0;
    FUN_1011ec66(iVar3 + 0x2ff18000);
    FUN_1011ec66(piVar1[0x1c] + 0x2ff18000);
    FUN_1011ec66(piVar1[0x1e] + 0x2ff18000);
    FUN_1011ec66(piVar1[0x1f] + 0x2ff18000);
    FUN_1011ec66(piVar1[0x24] + 0x2ff18000);
    FUN_1011ec66(piVar1[0x22] + 0x2ff18000);
    FUN_1011ec66(piVar1[0x25] + 0x2ff18000);
    FUN_1011ec66(piVar1[0x23] + 0x2ff18000);
    piVar1[1] = 0;
    *DAT_10071fd8 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffed;
  }
  return uVar4;
}

