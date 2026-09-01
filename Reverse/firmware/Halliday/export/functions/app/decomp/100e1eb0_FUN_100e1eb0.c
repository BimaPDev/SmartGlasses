/* FUN_100e1eb0 @ 0x100e1eb0 */

void FUN_100e1eb0(undefined4 param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  byte bVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  short *psVar10;
  undefined4 uVar11;
  int local_2c;
  undefined4 uStack_28;
  
  uVar4 = DAT_100e1f78;
  psVar3 = DAT_100e1f74;
  psVar10 = DAT_100e1f70;
  uVar11 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  do {
    if (psVar3 <= psVar10) {
      return;
    }
    if ((*(code **)(psVar10 + 2) != (code *)0x0) &&
       (iVar7 = (**(code **)(psVar10 + 2))(param_1,&local_2c), iVar5 = local_2c, -1 < iVar7)) {
      sVar1 = *psVar10;
      *(short *)(local_2c + 0x50) = sVar1;
      *(short *)(local_2c + 0x54) = sVar1;
      iVar7 = FUN_100e15d8(param_1,local_2c,0,sVar1,uVar11);
      if (iVar7 == 0) {
        return;
      }
      if (*psVar10 == 1) {
        FUN_10138208(iVar5);
        uVar9 = *(uint *)(iVar5 + 0x58);
        if (-1 < (int)(uVar9 << 0x1b)) {
          iVar7 = FUN_1013401c(uVar4,(uVar9 & 0x1f) >> 4,0xffffffff,0xffffffff);
          FUN_10138130((uint *)(iVar5 + 0x58),4);
          uVar6 = FUN_100e13b8();
          *(undefined1 *)(iVar5 + 0x60) = uVar6;
          puVar8 = (undefined1 *)FUN_100c1fe4(iVar7 + 8,4);
          *puVar8 = 10;
          uVar6 = *(undefined1 *)(iVar5 + 0x60);
          puVar8[2] = 2;
          puVar8[1] = uVar6;
          bVar2 = (byte)((uVar9 << 0x1b) >> 0x1f);
          puVar8[3] = bVar2;
          puVar8 = (undefined1 *)FUN_100c1fe4(iVar7 + 8);
          puVar8[1] = bVar2;
          *puVar8 = 2;
          FUN_10138156(iVar5,iVar7,4000,0);
        }
      }
    }
    psVar10 = psVar10 + 4;
  } while( true );
}

