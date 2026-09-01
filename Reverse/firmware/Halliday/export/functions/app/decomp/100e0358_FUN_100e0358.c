/* FUN_100e0358 @ 0x100e0358 */

undefined4 FUN_100e0358(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  
  puVar4 = PTR_s_Wait_TODO_meaning_0x_x_100e0414;
  puVar3 = PTR_DAT_100e0410;
  uVar9 = 0;
  iVar8 = (int)PTR_DAT_100e0408 - (int)PTR_DAT_100e040c;
  do {
    if (param_3 == 0) {
      return uVar9;
    }
    bVar1 = **(byte **)(param_2 + 8);
    bVar5 = bVar1 & 0x3f;
    if (bVar5 == 8) {
      iVar6 = 0;
LAB_100e03a8:
      if ((bVar1 & 0x3f) == 8) {
        uVar9 = 1;
      }
      (**(code **)(puVar3 + iVar6 * 8 + 4))(param_1,param_2);
    }
    else {
      if (bVar5 == 9) {
        iVar6 = 1;
        goto LAB_100e03a8;
      }
      if (bVar5 == 10) {
        iVar6 = 2;
        goto LAB_100e03a8;
      }
      if (bVar5 == 0xb) {
        iVar6 = 3;
        goto LAB_100e03a8;
      }
      if (bVar5 == 0xc) {
        iVar6 = 4;
        goto LAB_100e03a8;
      }
      FUN_100a5b78(iVar8 * 0x20 & 0xff00U | 0x1aa0031,puVar4,bVar5,*(byte **)(param_2 + 8),param_4);
    }
    uVar7 = (uint)(**(byte **)(param_2 + 8) >> 6);
    if (uVar7 != 2) {
      if (uVar7 == 3) {
        uVar7 = 5;
      }
      else {
        uVar2 = *(ushort *)(*(byte **)(param_2 + 8) + 1);
        uVar7 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
      }
    }
    FUN_100c1f58(param_2 + 8,uVar7);
    param_3 = param_3 - uVar7 & 0xffff;
  } while( true );
}

