/* FUN_2c640e8c @ 0x2c640e8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c640e8c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar1 = _LAB_2c6410bc;
  FUN_2c62a470();
  FUN_2c5fee6c();
  uVar2 = _DAT_2c6410c0;
  uVar7 = FUN_2c606a10();
  *puVar1 = uVar7;
  lv_obj_add_flag_invalidate(uVar7,1);
  uVar7 = _LAB_2c6410e8;
  puVar3 = _LAB_2c6410c4;
  FUN_2c606d9c(*puVar1,0);
  puVar4 = _LAB_2c6410c8;
  uVar8 = *puVar1;
  FUN_2c606d30(uVar8,0);
  puVar6 = _LAB_2c6410ec;
  FUN_2c606d3c(uVar8,0);
  FUN_2c606d18(uVar8,0);
  FUN_2c606d24(uVar8,0);
  FUN_2c606e74(*puVar1,0,0xff);
  FUN_2c606d6c(*puVar1,0xff,0);
  FUN_2c606d60(*puVar1,0xff000000,0);
  FUN_2c6072bc(*puVar1,1,0xe6,0x68);
  FUN_2c607048(*puVar1,0xb4,0x54);
  FUN_2c602454(*puVar1,_LAB_2c6410cc,0xd,0);
  uVar8 = FUN_2c606a10(*puVar1);
  *puVar3 = uVar8;
  FUN_2c603a04(uVar8,0,uVar2);
  FUN_2c607048(*puVar3,0x54);
  FUN_2c6072bc(*puVar3,7,0);
  FUN_2c606d78(*puVar3,uVar7,0);
  FUN_2c606d6c(*puVar3,0xff,0);
  FUN_2c606d60(*puVar3,0xff000000,0);
  uVar8 = FUN_2c6313f4(*puVar3);
  *puVar4 = uVar8;
  FUN_2c603a04(uVar8,0,uVar2);
  puVar5 = _LAB_2c6410d0;
  FUN_2c6072bc(*puVar4,2,0,10);
  uVar8 = FUN_2c637344(*puVar3);
  *puVar5 = uVar8;
  FUN_2c603a04(uVar8,0,uVar2);
  FUN_2c607048(*puVar5,0x27d1,0x1c);
  FUN_2c606d6c(*puVar5,0xff,0);
  FUN_2c606d60(*puVar5,0xff000000,0);
  FUN_2c606e20(*puVar5,0xff00ff00,0);
  puVar4 = _LAB_2c6410d4;
  FUN_2c6072bc(*puVar5,2,0,0x2e);
  uVar8 = FUN_2c606a10(*puVar1);
  *puVar4 = uVar8;
  FUN_2c603a04(uVar8,0,uVar2);
  FUN_2c607048(*puVar4,0x54);
  FUN_2c6072bc(*puVar4,8,0);
  FUN_2c606d78(*puVar4,uVar7,0);
  FUN_2c606d6c(*puVar4,0xff,0);
  FUN_2c606d60(*puVar4,0xff000000,0);
  uVar7 = FUN_2c6313f4(*puVar4);
  *puVar6 = uVar7;
  FUN_2c603a04(uVar7,0,uVar2);
  FUN_2c6072bc(*puVar6,2,0,10);
  puVar5 = _LAB_2c6410d8;
  uVar7 = FUN_2c637344(*puVar4);
  *puVar5 = uVar7;
  FUN_2c603a04(uVar7,0,uVar2);
  FUN_2c607048(*puVar5,0x27d1,0x1c);
  FUN_2c606d6c(*puVar5,0xff,0);
  FUN_2c606d60(*puVar5,0xff000000,0);
  FUN_2c606e20(*puVar5,0xff00ff00,0);
  FUN_2c6072bc(*puVar5,2,0,0x2e);
  puVar4 = _LAB_2c6410dc;
  uVar7 = FUN_2c6313f4(*puVar1);
  *puVar4 = uVar7;
  FUN_2c603a04(uVar7,0,uVar2);
  FUN_2c63140c(*puVar4,_LAB_2c6410e0);
  FUN_2c6072bc(*puVar4,7,0);
  *_LAB_2c6410e4 = *puVar3;
  return 1;
}

