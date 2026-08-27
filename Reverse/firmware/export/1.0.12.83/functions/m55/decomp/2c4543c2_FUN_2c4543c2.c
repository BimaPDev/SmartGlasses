/* FUN_2c4543c2 @ 0x2c4543c2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c3dbb56) */
/* WARNING: Removing unreachable block (ram,0x2c454b7a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4543c2(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int *piVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *extraout_r3;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  undefined4 *unaff_r4;
  undefined4 uVar21;
  undefined1 *unaff_r5;
  int iVar22;
  undefined4 unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  int *piVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  bool bVar26;
  int *piVar27;
  longlong lVar28;
  undefined4 in_cr3;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined8 uVar29;
  undefined4 in_stack_00000118;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000178;
  undefined1 auStack_28 [8];
  
  *(char *)(param_4 + param_2) = (char)param_4;
  uVar14 = GIF_2c3d8e74._10116_4_;
  puVar16 = unaff_r5 + 4;
  if (puVar16 == (undefined1 *)0x0) {
    _MasterStackPointer = (undefined1 *)param_1;
    *(undefined4 *)(unaff_r5 + 8) = unaff_r6;
    iVar22 = *(int *)(unaff_r5 + 0x68);
    iVar9 = param_1 - 0xb4;
    *(undefined4 *)(iVar9 + iVar22) = unaff_r6;
    iVar11 = _LAB_2c454d28;
    iVar19 = param_4 + -0x6b;
    iVar17 = iRam00000060;
    if (_LAB_2c454d28 != 0) {
      iVar17 = 0x2c454c20;
      *(undefined2 *)(iVar9 + iVar22) = 0;
      if (!SBORROW4(param_4,0x6b)) {
        uRam000000e4 = 0x20;
        *(short *)(param_4 + 0x61) = (short)iVar9;
        *(int *)iVar19 = iVar19;
        *(int *)(param_4 + -0x67) = iVar11;
        *(undefined4 *)(param_4 + -99) = 0xcc;
        *(char *)(iVar9 * 2) = (char)auStack_28 + -0x70;
        *(int *)((_LAB_2c454b48 >> 2) + 0x44) = iVar11 >> 0x16;
        *(char *)(_LAB_2c454c3c + 0xb1) = (char)_LAB_2c454c3c;
        *(short *)(iVar22 + -0x38) = (short)iVar22 + -0x58;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    coprocessor_loadlong(8,in_cr7,iVar17 + -0x274);
    iRam000000cc = param_2;
    iRam000000d0 = iVar19;
    uRam000000d4 = _LAB_2c454cf0;
    uRam000000d8 = 0xcc;
    coprocessor_loadlong(5,in_cr3,*(undefined4 *)(param_2 + 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((param_1 & 0x80000000) == 0 || param_1 << 1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar18 = (uint *)((int)(param_1 << 1) >> 0x18);
  *unaff_r4 = puVar16;
  unaff_r4[1] = puVar18;
  unaff_r4[2] = unaff_r5;
  unaff_r4[3] = uVar14;
  piVar23 = (int *)&stack0x000000d0;
  *(undefined1 **)GIF_2c3d8e74._10156_4_ = puVar16;
  uVar20 = (uint)(unaff_r4 + 4) >> 9;
  *(char *)((*(uint *)(unaff_r7 + (int)(unaff_r4 + 4)) >> 0x16) + 0x18) = (char)puVar16;
  bVar3 = *(byte *)(uVar20 * 2);
  uVar12 = (uint)bVar3;
  *(ushort *)((int)puVar18 + 0xe) = (ushort)bVar3;
  puVar16 = &stack0x000001e0;
  puVar8 = (undefined4 *)(uVar12 << 0x18);
  *(undefined2 *)(uVar20 + 0x20) = 0;
  if (!SBORROW4(uVar20,0x78)) {
    puVar10 = (undefined1 *)((int)puVar8 >> 0x1b);
    *(char *)(uVar12 + 5) = (char)uVar20;
    *puVar18 = (uint)puVar8;
    puVar18[1] = (uint)puVar10;
    puVar18[2] = (uint)unaff_r5;
    puVar8 = (undefined4 *)((uint)*(ushort *)(uVar14 + 0x20) * 0x8000);
    *(undefined4 *)(uint)(bVar3 >> 1) = uVar14;
    ((undefined4 *)(uint)(bVar3 >> 1))[1] = unaff_r7 << 4;
    *(short *)(puVar8 + 2) = (short)puVar8;
    puVar8[0x18] = uVar14;
    puVar24 = _MasterStackPointer;
    *(short *)((int)puVar8 + 0x2e) = (short)puVar8;
    iVar11 = GIF_2c3d8e74._11768_4_;
    iVar17 = 0x70;
    *puVar8 = 0x2c3dbbf4;
    iVar9 = (int)(puVar8 + 1) * 4;
    puVar16 = (undefined1 *)0x3f0;
    puVar1 = (undefined1 *)0x400;
    puVar2 = (undefined1 *)0x410;
    lVar28 = 8;
    while( true ) {
      *puVar16 = *puVar10;
      puVar10 = puVar10 + 1;
      *puVar1 = *puVar10;
      puVar10 = puVar10 + 1;
      *puVar2 = *puVar10;
      puVar10 = puVar10 + 1;
      lVar28 = lVar28 + -1;
      if (lVar28 == 0) break;
      puVar16 = puVar16 + 1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    *(int *)(puVar24 + 0x20) = iVar17 << 0x14;
    *(short *)((char)puVar24[0x40] + 0x2a) = (short)iVar11;
    *(int *)(iVar17 + 0x60) = iVar9;
    uRam00000022 = GIF_2c3d8e74._11668_2_;
    iVar19 = iVar11 - iVar9;
    uVar14 = uVar14 >> 0x10;
    if (GIF_2c3d8e74._11824_4_ != 0) {
      *(int *)(puVar24 + 0x24) = iVar17;
      uVar14 = iVar11 >> 0xb;
    }
    puVar25 = puVar24 + 0x30;
    if ((uVar14 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(puVar24 + 0xc4) = iVar17;
    *(undefined4 *)(puVar24 + 0x2c4) = 0x39;
    uVar4 = *(ushort *)(iVar9 + 2);
    *(int *)(iVar17 + 0x40) = iVar19;
    uVar21 = GIF_2c3d8e74._12216_4_;
    iVar9 = *(int *)(iVar9 * 0x1000000 + 0x40);
    if ((iVar11 != 0x47) && (iVar17 = GIF_2c3d8e74._12216_4_, -1 < iVar19 * 0x1000)) {
      *(short *)(iVar9 + 0x32) = GIF_2c3d8e74._12216_2_;
      uVar12 = (int)uVar21 >> 6;
      uVar14 = uVar4 | uVar12;
      *(uint *)(iVar19 + 0x48) = uVar14;
      iVar11 = (int)(char)uVar4 << 0xb;
      *(short *)(uVar12 + 2) = (short)iVar11;
      *(short *)(iVar9 + uVar12) = (short)iVar9;
      iVar17 = _LAB_2c5e225e_2 + -0x16;
      if (iVar17 < 0) {
        bVar3 = *(byte *)(uVar12 + 0x1e);
        *(int *)((iVar9 >> 0xc) * 2) = iVar9 >> 0xc;
        iVar17 = bVar3 - 0xd0;
        FUN_2c5dce38();
        FUN_2c5dce38(iVar17,_LAB_2c5e2404,_LAB_2c5e2400);
        FUN_2c5dce38(iVar17,_LAB_2c5e240c,_LAB_2c5e2408);
        FUN_2c5dce38(iVar17,_LAB_2c5e2414,_LAB_2c5e2410);
        FUN_2c5dce38(iVar17,_LAB_2c5e241c,_LAB_2c5e2418);
        FUN_2c5dce38(iVar17,_LAB_2c5e2424,_LAB_2c5e2420);
        FUN_2c5dce38(iVar17,_LAB_2c5e242c,_LAB_2c5e2428);
        FUN_2c5dce38(iVar17,_LAB_2c5e2434,_LAB_2c5e2430);
        FUN_2c5dce38(iVar17,_LAB_2c5e243c,_LAB_2c5e2438);
        FUN_2c5dce38(iVar17,_LAB_2c5e2444,_LAB_2c5e2440);
        FUN_2c5dce38(iVar17,_LAB_2c5e244c,_LAB_2c5e2448);
        iVar11 = _LAB_2c5e2454;
        uVar14 = _LAB_2c5e2450;
      }
      FUN_2c5dce38(iVar17,iVar11,uVar14);
      FUN_2c5dce38(iVar17,_LAB_2c5e245c,_LAB_2c5e2458);
      FUN_2c5dce38(iVar17,_LAB_2c5e2464,_DAT_2c5e2460);
      FUN_2c5dce38(iVar17,_LAB_2c5e246c,_LAB_2c5e2468);
      FUN_2c5dce38(iVar17,_LAB_2c5e2474,_LAB_2c5e2470);
      FUN_2c5dce38(iVar17,_LAB_2c5e247c,_LAB_2c5e2478);
      FUN_2c5dce38(iVar17,_LAB_2c5e2484,_DAT_2c5e2480);
      FUN_2c5dce38(iVar17,_LAB_2c5e248c,_LAB_2c5e2488);
      FUN_2c5dce38(iVar17,_LAB_2c5e2494,_LAB_2c5e2490);
      FUN_2c5dce38(iVar17,_LAB_2c5e249c,_LAB_2c5e2498);
      FUN_2c5dce38(iVar17,_LAB_2c5e24a4,_LAB_2c5e24a0);
      FUN_2c5dce38(iVar17,_LAB_2c5e24ac,_LAB_2c5e24a8);
      FUN_2c5dce38(iVar17,_LAB_2c5e24b4,_LAB_2c5e24b0);
      FUN_2c5dce38(iVar17,_LAB_2c5e24bc,_LAB_2c5e24b8);
      FUN_2c5dce38(iVar17,_LAB_2c5e24c4,_LAB_2c5e24c0);
      FUN_2c5dce38(iVar17,_LAB_2c5e24cc,_LAB_2c5e24c8);
      FUN_2c5dce38(iVar17,_LAB_2c5e24d4,_LAB_2c5e24d0);
      FUN_2c5dce38(iVar17,_LAB_2c5e24dc,_LAB_2c5e24d8);
      FUN_2c5dce38(iVar17,_LAB_2c5e24e4,_LAB_2c5e24e0);
      FUN_2c5dce38(iVar17,_LAB_2c5e24ec,_LAB_2c5e24e8);
      FUN_2c5dce38(iVar17,_LAB_2c5e24f4,_LAB_2c5e24f0);
      FUN_2c5dce38(iVar17,_LAB_2c5e24fc,_LAB_2c5e24f8);
      FUN_2c5dce38(iVar17,_LAB_2c5e2504,_LAB_2c5e2500);
      FUN_2c5dce38(iVar17,_LAB_2c5e250c,_LAB_2c5e2508);
      FUN_2c5dce38(iVar17,_LAB_2c5e2514,_LAB_2c5e2510);
      FUN_2c5dce38(iVar17,_LAB_2c5e251c,_LAB_2c5e2518);
      FUN_2c5dce38(iVar17,_LAB_2c5e2524,_LAB_2c5e2520);
      FUN_2c5dce38(iVar17,_LAB_2c5e252c,_LAB_2c5e2528);
      FUN_2c5dce38(iVar17,_LAB_2c5e2534,_LAB_2c5e2530);
      FUN_2c5dce38(iVar17,_LAB_2c5e253c,_DAT_2c5e2538);
      FUN_2c5dce38(iVar17,_LAB_2c5e2544,_LAB_2c5e2540);
      FUN_2c5dce38(iVar17,_LAB_2c5e254c,_LAB_2c5e2548);
      FUN_2c5dce38(iVar17,_LAB_2c5e2554,_LAB_2c5e2550);
      FUN_2c5dce38(iVar17,_LAB_2c5e255c,_LAB_2c5e2558);
      FUN_2c5dce38(iVar17,_LAB_2c5e2564,_LAB_2c5e2560);
      FUN_2c5dce38(iVar17,_LAB_2c5e256c,_LAB_2c5e2568);
      FUN_2c5dce38(iVar17,_LAB_2c5e2574,_LAB_2c5e2570);
      FUN_2c5dce38(iVar17,_LAB_2c5e257c,_LAB_2c5e2578);
      FUN_2c5dce38(iVar17,_LAB_2c5e2584,_LAB_2c5e2580);
      FUN_2c5dce38(iVar17,_LAB_2c5e258c,_LAB_2c5e2588);
      FUN_2c5dce38(iVar17,_LAB_2c5e2594,_LAB_2c5e2590);
      FUN_2c5dce38(iVar17,LAB_2c5e259c,uRam2c5e2598);
      FUN_2c5dce38(iVar17,DAT_2c5e25a4,DAT_2c5e25a0);
      FUN_2c5dce38(iVar17,DAT_2c5e25ac,DAT_2c5e25a8);
      FUN_2c5dce38(iVar17,DAT_2c5e25b4,DAT_2c5e25b0);
      FUN_2c5dce38(iVar17,DAT_2c5e25bc,DAT_2c5e25b8);
      FUN_2c5dce38(iVar17,DAT_2c5e25c4,DAT_2c5e25c0);
      FUN_2c5dce38(iVar17,DAT_2c5e25cc,DAT_2c5e25c8);
      FUN_2c5dce38(iVar17,DAT_2c5e25d4,DAT_2c5e25d0);
      FUN_2c5dce38(iVar17,DAT_2c5e25dc,DAT_2c5e25d8);
      FUN_2c5dce38(iVar17,DAT_2c5e25e4,DAT_2c5e25e0);
      FUN_2c5dce38(iVar17,DAT_2c5e25ec,DAT_2c5e25e8);
      FUN_2c5dce38(iVar17,DAT_2c5e25f4,DAT_2c5e25f0);
      FUN_2c5dce38(iVar17,DAT_2c5e25fc,DAT_2c5e25f8);
      FUN_2c5dce38(iVar17,DAT_2c5e2604,DAT_2c5e2600);
      FUN_2c5dce38(iVar17,DAT_2c5e260c,DAT_2c5e2608);
      FUN_2c5dce38(iVar17,DAT_2c5e2614,DAT_2c5e2610);
      FUN_2c5dce38(iVar17,DAT_2c5e261c,DAT_2c5e2618);
      FUN_2c5dce38(iVar17,DAT_2c5e2624,DAT_2c5e2620);
      FUN_2c5dce38(iVar17,DAT_2c5e262c,DAT_2c5e2628);
      FUN_2c5dce38(iVar17,DAT_2c5e2634,DAT_2c5e2630);
      FUN_2c5dce38(iVar17,DAT_2c5e263c,DAT_2c5e2638);
      FUN_2c5dce38(iVar17,LAB_2c5e291c,DAT_2c5e2640);
      FUN_2c5dce38(iVar17,DAT_2c5e2924,DAT_2c5e2920);
      FUN_2c5dce38(iVar17,DAT_2c5e292c,DAT_2c5e2928);
      FUN_2c5dce38(iVar17,DAT_2c5e2934,DAT_2c5e2930);
      FUN_2c5dce38(iVar17,DAT_2c5e293c,DAT_2c5e2938);
      FUN_2c5dce38(iVar17,DAT_2c5e2944,DAT_2c5e2940);
      FUN_2c5dce38(iVar17,DAT_2c5e294c,DAT_2c5e2948);
      FUN_2c5dce38(iVar17,DAT_2c5e2954,DAT_2c5e2950);
      FUN_2c5dce38(iVar17,DAT_2c5e295c,DAT_2c5e2958);
      FUN_2c5dce38(iVar17,DAT_2c5e2964,DAT_2c5e2960);
      FUN_2c5dce38(iVar17,DAT_2c5e296c,DAT_2c5e2968);
      FUN_2c5dce38(iVar17,DAT_2c5e2974,DAT_2c5e2970);
      FUN_2c5dce38(iVar17,DAT_2c5e297c,DAT_2c5e2978);
      FUN_2c5dce38(iVar17,DAT_2c5e2984,DAT_2c5e2980);
      FUN_2c5dce38(iVar17,DAT_2c5e298c,DAT_2c5e2988);
      FUN_2c5dce38(iVar17,DAT_2c5e2994,DAT_2c5e2990);
      FUN_2c5dce38(iVar17,DAT_2c5e299c,DAT_2c5e2998);
      FUN_2c5dce38(iVar17,DAT_2c5e29a4,DAT_2c5e29a0);
      FUN_2c5dce38(iVar17,DAT_2c5e29ac,DAT_2c5e29a8);
      FUN_2c5dce38(iVar17,DAT_2c5e29b4,DAT_2c5e29b0);
      FUN_2c5dce38(iVar17,DAT_2c5e29bc,DAT_2c5e29b8);
      FUN_2c5dce38(iVar17,DAT_2c5e29c4,DAT_2c5e29c0);
      FUN_2c5dce38(iVar17,DAT_2c5e29cc,DAT_2c5e29c8);
      FUN_2c5dce38(iVar17,DAT_2c5e29d4,DAT_2c5e29d0);
      FUN_2c5dce38(iVar17,DAT_2c5e29dc,DAT_2c5e29d8);
      FUN_2c5dce38(iVar17,DAT_2c5e29e4,DAT_2c5e29e0);
      FUN_2c5dce38(iVar17,DAT_2c5e29ec,DAT_2c5e29e8);
      FUN_2c5dce38(iVar17,DAT_2c5e29f4,DAT_2c5e29f0);
      FUN_2c5dce38(iVar17,DAT_2c5e29fc,DAT_2c5e29f8);
      FUN_2c5dce38(iVar17,DAT_2c5e2a04,DAT_2c5e2a00);
      FUN_2c5dce38(iVar17,DAT_2c5e2a0c,DAT_2c5e2a08);
      FUN_2c5dce38(iVar17,DAT_2c5e2a14,DAT_2c5e2a10);
      FUN_2c5dce38(iVar17,DAT_2c5e2a1c,DAT_2c5e2a18);
      FUN_2c5dce38(iVar17,DAT_2c5e2a24,DAT_2c5e2a20);
      FUN_2c5dce38(iVar17,DAT_2c5e2a2c,DAT_2c5e2a28);
      FUN_2c5dce38(iVar17,DAT_2c5e2a34,DAT_2c5e2a30);
      FUN_2c5dce38(iVar17,DAT_2c5e2a3c,DAT_2c5e2a38);
      FUN_2c5dce38(iVar17,DAT_2c5e2a44,DAT_2c5e2a40);
      FUN_2c5dce38(iVar17,DAT_2c5e2a4c,DAT_2c5e2a48);
      FUN_2c5dce38(iVar17,DAT_2c5e2a54,DAT_2c5e2a50);
      FUN_2c5dce38(iVar17,DAT_2c5e2a5c,DAT_2c5e2a58);
      FUN_2c5dce38(iVar17,DAT_2c5e2a64,DAT_2c5e2a60);
      FUN_2c5dce38(iVar17,DAT_2c5e2a6c,DAT_2c5e2a68);
      FUN_2c5dce38(iVar17,DAT_2c5e2a74,DAT_2c5e2a70);
      FUN_2c5dce38(iVar17,DAT_2c5e2a7c,DAT_2c5e2a78);
      FUN_2c5dce38(iVar17,DAT_2c5e2a84,DAT_2c5e2a80);
      FUN_2c5dce38(iVar17,DAT_2c5e2a8c,DAT_2c5e2a88);
      FUN_2c5dce38(iVar17,DAT_2c5e2a94,DAT_2c5e2a90);
      FUN_2c5dce38(iVar17,DAT_2c5e2a9c,DAT_2c5e2a98);
      FUN_2c5dce38(iVar17,DAT_2c5e2aa4,DAT_2c5e2aa0);
      FUN_2c5dce38(iVar17,DAT_2c5e2aac,DAT_2c5e2aa8);
      FUN_2c5dce38(iVar17,DAT_2c5e2ab4,DAT_2c5e2ab0);
      FUN_2c5dce38(iVar17,DAT_2c5e2abc,DAT_2c5e2ab8);
      FUN_2c5dce38(iVar17,DAT_2c5e2ac4,DAT_2c5e2ac0);
      FUN_2c5dce38(iVar17,DAT_2c5e2acc,DAT_2c5e2ac8);
      FUN_2c5dce38(iVar17,DAT_2c5e2ad4,DAT_2c5e2ad0);
      FUN_2c5dce38(iVar17,DAT_2c5e2adc,DAT_2c5e2ad8);
      FUN_2c5dce38(iVar17,DAT_2c5e2ae4,DAT_2c5e2ae0);
      FUN_2c5dce38(iVar17,DAT_2c5e2aec,DAT_2c5e2ae8);
      FUN_2c5dce38(iVar17,DAT_2c5e2af4,DAT_2c5e2af0);
      FUN_2c5dce38(iVar17,DAT_2c5e2afc,DAT_2c5e2af8);
      FUN_2c5dce38(iVar17,DAT_2c5e2b04,DAT_2c5e2b00);
      FUN_2c5dce38(iVar17,DAT_2c5e2b0c,DAT_2c5e2b08);
      FUN_2c5dce38(iVar17,DAT_2c5e2b14,DAT_2c5e2b10);
      FUN_2c5dce38(iVar17,DAT_2c5e2b1c,DAT_2c5e2b18);
      FUN_2c5dce38(iVar17,DAT_2c5e2b24,DAT_2c5e2b20);
      FUN_2c5dce38(iVar17,DAT_2c5e2b2c,DAT_2c5e2b28);
      FUN_2c5dce38(iVar17,DAT_2c5e2b34,DAT_2c5e2b30);
      FUN_2c5dce38(iVar17,_LAB_2c5e2b3c,_LAB_2c5e2b38);
      FUN_2c5dce38(iVar17,_LAB_2c5e2b44,_LAB_2c5e2b40);
      FUN_2c5dce38(iVar17,_LAB_2c5e2b4c,_LAB_2c5e2b48);
      FUN_2c5dce38(iVar17,_LAB_2c5e2b54,_LAB_2c5e2b50);
      FUN_2c5dce38(iVar17,_LAB_2c5e2b5c,_LAB_2c5e2b58);
      FUN_2c5dce38(iVar17,DAT_2c5e2d08,DAT_2c5e2d04);
      FUN_2c5dce38(iVar17,DAT_2c5e2d10,DAT_2c5e2d0c);
      FUN_2c5dce38(iVar17,DAT_2c5e2d18,DAT_2c5e2d14);
      FUN_2c5dce38(iVar17,DAT_2c5e2d20,DAT_2c5e2d1c);
      FUN_2c5dce38(iVar17,DAT_2c5e2d28,DAT_2c5e2d24);
      FUN_2c5dce38(iVar17,DAT_2c5e2d30,DAT_2c5e2d2c);
      FUN_2c5dce38(iVar17,DAT_2c5e2d38,DAT_2c5e2d34);
      FUN_2c5dce38(iVar17,DAT_2c5e2d40,DAT_2c5e2d3c);
      FUN_2c5dce38(iVar17,DAT_2c5e2d48,DAT_2c5e2d44);
      FUN_2c5dce38(iVar17,DAT_2c5e2d50,DAT_2c5e2d4c);
      FUN_2c5dce38(iVar17,DAT_2c5e2d58,DAT_2c5e2d54);
      FUN_2c5dce38(iVar17,DAT_2c5e2d60,DAT_2c5e2d5c);
      FUN_2c5dce38(iVar17,DAT_2c5e2d68,DAT_2c5e2d64);
      FUN_2c5dce38(iVar17,DAT_2c5e2d70,DAT_2c5e2d6c);
      FUN_2c5dce38(iVar17,DAT_2c5e2d78,DAT_2c5e2d74);
      FUN_2c5dce38(iVar17,DAT_2c5e2d80,DAT_2c5e2d7c);
      FUN_2c5dce38(iVar17,DAT_2c5e2d88,DAT_2c5e2d84);
      FUN_2c5dce38(iVar17,DAT_2c5e2d90,DAT_2c5e2d8c);
      FUN_2c5dce38(iVar17,DAT_2c5e2d98,DAT_2c5e2d94);
      FUN_2c5dce38(iVar17,DAT_2c5e2da0,DAT_2c5e2d9c);
      FUN_2c5dce38(iVar17,DAT_2c5e2da8,DAT_2c5e2da4);
      FUN_2c5dce38(iVar17,DAT_2c5e2db0,DAT_2c5e2dac);
      FUN_2c5dce38(iVar17,DAT_2c5e2db8,DAT_2c5e2db4);
      FUN_2c5dce38(iVar17,DAT_2c5e2dc0,DAT_2c5e2dbc);
      FUN_2c5dce38(iVar17,DAT_2c5e2dc8,DAT_2c5e2dc4);
      FUN_2c5dce38(iVar17,DAT_2c5e2dd0,DAT_2c5e2dcc);
      FUN_2c5dce38(iVar17,DAT_2c5e2dd8,DAT_2c5e2dd4);
      FUN_2c5dce38(iVar17,DAT_2c5e2de0,DAT_2c5e2ddc);
      FUN_2c5dce38(iVar17,DAT_2c5e2de8,DAT_2c5e2de4);
      FUN_2c5dce38(iVar17,DAT_2c5e2df0,DAT_2c5e2dec);
      FUN_2c5dce38(iVar17,DAT_2c5e2df8,DAT_2c5e2df4);
      FUN_2c5dce38(iVar17,DAT_2c5e2e00,DAT_2c5e2dfc);
      FUN_2c5dce38(iVar17,DAT_2c5e2e08,DAT_2c5e2e04);
      FUN_2c5dce38(iVar17,DAT_2c5e2e10,DAT_2c5e2e0c);
      FUN_2c5dce38(iVar17,DAT_2c5e2e18,DAT_2c5e2e14);
      FUN_2c5dce38(iVar17,DAT_2c5e2e20,DAT_2c5e2e1c);
      FUN_2c5dce38(iVar17,DAT_2c5e2e28,DAT_2c5e2e24);
      FUN_2c5dce38(iVar17,DAT_2c5e2e30,DAT_2c5e2e2c);
      FUN_2c5dce38(iVar17,DAT_2c5e2e38,DAT_2c5e2e34);
      FUN_2c5dce38(iVar17,DAT_2c5e2e40,DAT_2c5e2e3c);
      FUN_2c5dce38(iVar17,DAT_2c5e2e48,DAT_2c5e2e44);
      return;
    }
    GIF_2c3d8e74._11874_2_ = 0;
    uVar14 = (uint)*(ushort *)(puVar24 + 0x5c);
    uVar4 = *(ushort *)(uVar14 + 0xc);
    iVar11 = (uint)uVar4 * 0x100;
    *(ushort *)(*(int *)(iVar17 + 0xc) + 0x28) = *(ushort *)(puVar24 + 0x5c);
    *(undefined1 *)(uVar14 + uVar4) = 0;
    uVar12 = (int)(puVar24 + 0x50) >> 8;
    *(short *)(iVar17 + 0x30) = (short)((uint)(puVar24 + 0x50) >> 8);
    uVar21 = GIF_2c3d8e74._11704_4_;
    uVar5 = *(ushort *)(uVar14 + 0x1a);
    piVar15 = (int *)(uVar12 * 2);
    iVar9 = *piVar15;
    iVar19 = piVar15[1];
    piVar27 = piVar15 + 2;
    if (CARRY4(uVar12,uVar12) && piVar15 != (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    **(ushort **)(puVar24 + 0x98) = uVar5;
    cVar6 = (char)((iVar17 + 0x10) * 0x10000 + 8U >> 0xd) + -0x7f;
    *(int **)(iVar9 + 0x10) = piVar27;
    *(char *)(iVar11 + 2) = cVar6;
    *(int **)(iVar11 + 0x10) = piVar27;
    uVar14 = (uint)(uVar4 >> 0xe);
    *(uint *)(uVar21 + 0x40) = uVar14;
    *(uint *)(iVar11 + 0x40) = uVar14;
    puVar16 = (undefined1 *)GIF_2c3d8e74._12768_4_;
    if (uVar14 != 0) {
      *(char *)(uVar21 + 0x14) = cVar6;
      bVar3 = *(byte *)(uVar21 + 0x11);
      *(char *)(uint)bVar3 = (char)piVar27;
      puVar8 = *(undefined4 **)(puVar24 + 0x58);
      *puVar8 = *(undefined4 *)(uint)bVar3;
      puVar8[1] = puVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar14 = (uint)*(byte *)(iVar11 + 0x1b);
    *(uint *)(uint)uVar5 = uVar14;
    puVar18 = (uint *)(uint)uVar5 + 1;
    iVar11 = 0;
    while( true ) {
      bVar26 = SBORROW4((int)piVar27,(int)puVar16);
      *(short *)(iVar11 + 0x2a) = (short)puVar16;
      uVar12 = uVar14 >> 0x14;
      *(int *)(puVar24 + 0xe8) = iVar19;
      uVar14 = *puVar18;
      uVar20 = puVar18[1];
      puVar18 = puVar18 + 2;
      puVar16 = *(undefined1 **)(iVar11 + uVar20);
      *(int **)(puVar24 + 0xb4) = piVar27;
      iVar11 = iRam0000008d;
      if ((uVar12 & 1) != 0) break;
      if (bVar26) {
        puVar1 = (undefined1 *)0x3f0;
        puVar2 = (undefined1 *)0x400;
        puVar24 = (undefined1 *)0x410;
        lVar28 = 8;
        while( true ) {
          *puVar1 = *puVar16;
          puVar16 = puVar16 + 1;
          *puVar2 = *puVar16;
          puVar16 = puVar16 + 1;
          *puVar24 = *puVar16;
          puVar16 = puVar16 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
          puVar24 = puVar24 + 1;
        }
        *(uint *)(puVar25 + 0x31c) = uVar20 << 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(undefined2 *)(iRam0000008d + 0x32) = 0xbe48;
    iVar17 = *(int *)(uVar14 + 0x54);
    *(char *)((uVar14 >> 0x11) + (uint)*(ushort *)(iVar11 + 2)) = (char)uVar14;
    uVar12 = (uint)*(ushort *)(uVar14 + 0x28);
    uVar21 = *(undefined4 *)(iVar17 + 0xc);
    *(uint *)(puVar24 + 0x38) = uVar12;
    *(short *)(uVar12 + 0xc) = (short)uVar14;
    *(undefined1 *)(iVar17 >> 0x17) = 0x90;
    if ((undefined1 *)(iVar17 >> 0x17) != (undefined1 *)0x0) {
      *(int *)(puVar24 + 0x7c) = iVar17;
      _IRQ = uVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = *(ushort *)(uVar12 + 4);
    uVar12 = (uint)(uVar4 >> 8);
    piVar15 = (int *)((uint)(puVar24 + 0x30) >> 0xb);
    iRam00001622 = iVar19 >> 0x16;
    *(short *)(*(byte *)(GIF_2c3d8e74._12312_4_ + uVar12) + 0xe) = (short)piVar15;
    *piVar15 = (int)uVar12 >> 6;
    piVar15[1] = (int)puVar16 << 2;
    piVar15[2] = 0x40;
    *(uint *)(puVar24 + 0x370) = uVar12;
    uRam0000161e = 0x161e;
    uRam00001626 = 0x40;
    uRam587b79f8 = 0x10;
    uRam00000013 = (undefined1)(uVar4 >> 8);
    uRam0000162a = uVar12;
    uVar29 = func_0x2d25c7cc(0x2c3dbcfc,iVar19);
    *(undefined4 *)((int)uVar29 + 0x20) = 0x40;
    uVar14 = (uint)*(byte *)((int)uVar29 + 0x161ede7e);
    *(short *)(uVar14 + 0x161ede7e) = (short)extraout_r3;
    *(uint *)(uVar14 + (int)((ulonglong)uVar29 >> 0x20)) = uVar12;
    puVar18 = extraout_r3;
code_r0x2c3dbd0e:
    *(short *)(uVar14 + 0x24) = (short)((int)puVar18 >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    iVar11 = puVar8[2];
    *(uint *)(uVar12 + (int)puVar18) = uVar12;
    *(uint *)((int)piVar23 + 0x288) = uVar20;
    *(short *)(puVar16 + 0x2a) = (short)unaff_r5;
    puVar13 = (uint *)(uint)*(ushort *)(unaff_r5 + 8);
    uVar12 = uVar20 + iVar11 + (uint)(0x7d < (int)puVar8 + 2U);
    uVar14 = 0;
    puVar13[0x12] = uVar12;
    if (puVar16 == (undefined1 *)0x0) {
code_r0x2c3db992:
      puVar13 = (uint *)puVar13[0x11];
      *(char *)(uVar14 + 7) = (char)uVar14;
      uVar20 = (uint)puVar18 | (uint)puVar8;
      puVar16 = (undefined1 *)(uVar14 >> 3);
      if ((uVar14 >> 2 & 1) == 0 || puVar16 == (undefined1 *)0x0) {
        iVar11 = 0;
        puVar1 = (undefined1 *)0x3f0;
        puVar2 = (undefined1 *)0x400;
        puVar24 = (undefined1 *)0x410;
        lVar28 = 8;
        while( true ) {
          *puVar1 = *puVar16;
          puVar16 = puVar16 + 1;
          *puVar2 = *puVar16;
          puVar16 = puVar16 + 1;
          *puVar24 = *puVar16;
          puVar16 = puVar16 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
          puVar24 = puVar24 + 1;
        }
        puVar16 = (undefined1 *)piVar23[8];
        *(short *)(uVar20 + 0x2a) = (short)((int)uVar20 >> 0x1f);
        *piVar23 = (int)uVar20 >> 0x20;
        puVar8 = (undefined4 *)&GIF_2c3d8e74.field_0x2d34;
        uVar20 = *(uint *)(iVar11 * 0x100000 + -0x2c3dbb9c);
        puVar18 = (uint *)(iVar11 * 0x100000 + -0x2c3dbb98);
code_r0x2c3db9f0:
        *(char *)((int)puVar8 + 0x13) = (char)puVar16;
        *(undefined4 *)(uVar20 + 8) = 0;
        uVar14 = 0xc;
        *(undefined4 *)(uVar20 + 0x74) = 0x2c3dbc9c;
        goto code_r0x2c3dbd0e;
      }
      *(char *)(uVar12 + 10) = (char)puVar8;
      bVar26 = false;
    }
    else {
      uVar20 = *(uint *)(puVar16 + 0x38);
      if (SBORROW4((int)puVar13,0x23)) goto code_r0x2c3db9f0;
      *(uint *)(GIF_2c3d8e74._11096_4_ + 0x38) = unaff_r7;
      *(short *)(puVar18 + 4) = (short)unaff_r7;
      puVar13 = (uint *)((int)puVar18 * 0x4000000);
      *puVar13 = (uint)puVar16;
      puVar13[1] = 0;
      puVar13[2] = uVar20;
      puVar13[3] = unaff_r7;
      puVar13 = puVar13 + 4;
      puVar16 = (undefined1 *)((int)puVar16 >> 1);
      bVar26 = puVar18 == (uint *)0xfffffffe;
      if (puVar16 == (undefined1 *)0x0) {
        puVar8 = (undefined4 *)puVar18[1];
        *puVar8 = puVar13;
        puVar8[1] = uVar12;
        puVar8 = puVar8 + 2;
        uVar14 = GIF_2c3d8e74._11164_4_;
        goto code_r0x2c3db992;
      }
    }
    *(short *)(puVar16 + uVar12) = (short)uVar14;
    uVar21 = GIF_2c3d8e74._11176_4_;
    coprocessor_load(1,in_cr10,unaff_r8 - 0x1d0);
    if (!bVar26) {
      *(short *)(((int)puVar13 >> 0x11) + 0x20) = (short)puVar13;
      uVar7 = GIF_2c3d8e74._12672_4_;
      Reserved6 = (undefined1)uVar21;
      *(short *)(((int)puVar13 >> 0x20) + 0x2c) = (short)((int)puVar13 >> 0x1f);
      *(undefined4 *)((int)puVar13 + 0xd) = uVar7;
      iVar11 = ((int)puVar13 >> 0x11) << (uVar7 & 0xff);
      *(undefined4 *)uVar7 = uVar7;
      *(uint **)(uVar7 + 4) = puVar13;
      *(uint *)(iVar11 * 0x100001) = ((uint)puVar13 >> 0x14) - 0x40;
      *(short *)(*(int *)((int)piVar23 + 0x74) + 0x16) =
           (short)*(undefined4 *)(((int)(uint)*(ushort *)(iVar11 * 0x100000 + 0x1a) >> 2) + 4) +
           0x7a;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar13[0x12] = (uint)*(byte *)(uVar14 + 0x10);
    *(short *)(puVar13 + 0xb) = (short)puVar16;
    *(undefined1 **)((int)piVar23 + 0x23c) = puVar16;
    puVar16[0xa0] = 0;
    *(undefined1 **)(puVar16 + 0x30) = puVar16;
    *(uint **)((int)piVar23 + 0x34) = puVar13;
    unaff_r5 = (undefined1 *)((int)puVar13 + (int)puVar16);
    puVar1 = (undefined1 *)0x3f0;
    puVar2 = (undefined1 *)0x400;
    puVar24 = (undefined1 *)0x410;
    lVar28 = 8;
    puVar10 = puVar16;
    while( true ) {
      *puVar1 = *puVar10;
      puVar10 = puVar10 + 1;
      *puVar2 = *puVar10;
      puVar10 = puVar10 + 1;
      *puVar24 = *puVar10;
      puVar10 = puVar10 + 1;
      lVar28 = lVar28 + -1;
      if (lVar28 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      puVar24 = puVar24 + 1;
    }
    puVar18 = (uint *)(puVar16 + uVar12);
    unaff_r7 = (int)puVar18 * 0x20000;
    puVar16 = (undefined1 *)((((int)unaff_r5 << 0x14) >> 0x1a) << 0x18);
    *(char *)((int)puVar18 + 2) = (char)((uint)puVar18 >> 1);
    puVar18[5] = (uint)puVar16;
    uVar20 = 0x2c3db9d0;
    uVar12 = *puVar18;
    unaff_r8 = puVar18[1];
    puVar8 = (undefined4 *)(((uint)puVar18 >> 1) << 0x11);
    puVar18 = puVar13;
  } while( true );
}

