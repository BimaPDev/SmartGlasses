/* FUN_10034cfc @ 0x10034cfc */

void FUN_10034cfc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 local_1ac;
  undefined1 auStack_1a8 [124];
  undefined4 local_12c;
  undefined1 auStack_128 [252];
  int local_2c;
  
  local_2c = *DAT_10034e28;
  if ((param_2 != 0) && (param_1 != (undefined4 *)0x0)) goto LAB_10034d3e;
  uVar3 = DAT_10034e34 | (DAT_10034e30 - DAT_10034e2c) * 0x20 & 0xff00U;
  uVar4 = DAT_10034e38;
  do {
    FUN_100a5b78(uVar3,DAT_10034e3c,uVar4);
    uVar4 = 0xffffffff;
    do {
      if (*DAT_10034e28 == local_2c) {
        return;
      }
      FUN_1013cdc0(uVar4);
LAB_10034d3e:
      uVar3 = 0;
      local_12c = 0;
      FUN_1011ea48(auStack_128,0,0xfc);
      local_1ac = 0;
      FUN_1011ea48(auStack_1a8,0,0x7c);
      puVar2 = DAT_10034e60;
      iVar7 = DAT_10034e5c;
      do {
        if (*puVar2 <= (uVar3 & 0xff)) {
          FUN_10118a1c(&local_1ac,0x80,DAT_10034e40,param_2);
          uVar3 = DAT_10034e44 | (DAT_10034e30 - DAT_10034e2c) * 0x20 & 0xff00U;
          uVar8 = DAT_10034e48;
          goto LAB_10034dd2;
        }
        iVar9 = (uVar3 & 0xff) * 0x6e;
        iVar5 = FUN_1011ea18(iVar9 + 10 + iVar7,param_2);
        uVar3 = uVar3 + 1;
      } while (iVar5 != 0);
      FUN_10118a1c(&local_1ac,0x80,DAT_10034e40,iVar7 + iVar9);
      uVar3 = (DAT_10034e30 - DAT_10034e2c) * 0x20 & 0xff00U | 0x2740031;
      uVar8 = DAT_10034e4c;
LAB_10034dd2:
      uVar4 = 0;
      FUN_100a5b78(uVar3,DAT_10034e3c,uVar8,&local_1ac);
      FUN_10034ab4(&local_12c,&local_1ac);
      uVar1 = DAT_10034e54;
      uVar8 = DAT_10034e3c;
      uVar3 = (DAT_10034e30 - DAT_10034e2c) * 0x20 & 0xff00;
      uVar6 = DAT_10034e50 | uVar3;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_100a5b78(uVar6,uVar8,uVar1,uVar8,&local_12c);
      iVar7 = FUN_1006ba84(param_1,&local_12c,1);
    } while (-1 < iVar7);
    uVar3 = uVar3 | 0x2840031;
    uVar4 = DAT_10034e58;
  } while( true );
}

