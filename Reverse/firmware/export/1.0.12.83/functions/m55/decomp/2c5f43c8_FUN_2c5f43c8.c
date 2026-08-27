/* FUN_2c5f43c8 @ 0x2c5f43c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5f43c8(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  bVar1 = *param_1;
  if (bVar1 < 0x27) {
    if (((bVar1 == 0x22) && (uVar5 = (uint)param_1[1], uVar5 != 0)) &&
       ((pbVar2 = param_1 + 1, -1 < (int)(uVar5 << 0x18) || ((uVar5 + 0x3e & 0xff) < 0x33)))) {
      uVar6 = 0;
      pbVar4 = pbVar2;
LAB_2c5f449a:
      pbVar7 = pbVar2;
      if (-1 < (int)((uint)*(byte *)(_LAB_2c5f4690 + uVar5) << 0x1b)) {
        if (uVar5 < 0xe1) {
          if (uVar5 < 0x5d) {
            if (uVar5 == 0) goto LAB_2c5f453e;
            if (0x22 < uVar5) {
              while( true ) {
                pbVar3 = pbVar2;
                uVar5 = (uint)pbVar3[1];
                pbVar2 = pbVar3 + 1;
                pbVar7 = pbVar2;
                if ((int)((uint)*(byte *)(_LAB_2c5f4690 + uVar5) << 0x1b) < 0) break;
                if (0xe0 < uVar5) {
                  if (uVar5 < 0xf0) goto joined_r0x2c5f452a;
                  if (uVar5 == 0xf0) goto LAB_2c5f47dc;
                  if (0xf3 < uVar5) goto joined_r0x2c5f459c;
                  goto LAB_2c5f47a0;
                }
                if (0x5c < uVar5) {
                  if (0xc1 < uVar5) goto joined_r0x2c5f4812;
                  goto LAB_2c5f453e;
                }
                if (uVar5 == 0) goto LAB_2c5f453e;
                if (uVar5 < 0x23) {
                  uVar5 = (uint)pbVar3[2];
                  pbVar2 = pbVar3 + 2;
                  pbVar4 = pbVar2;
                  if ((int)((uint)*(byte *)(_LAB_2c5f4690 + uVar5) << 0x1b) < 0) {
                    uVar6 = 1;
                    pbVar7 = pbVar2;
                    break;
                  }
                  if (0xe0 < uVar5) {
                    if (uVar5 < 0xf0) {
                      uVar6 = 1;
                      goto joined_r0x2c5f452a;
                    }
                    if (uVar5 == 0xf0) {
                      uVar6 = 1;
                      goto LAB_2c5f47dc;
                    }
                    if (uVar5 < 0xf4) {
                      uVar6 = 1;
                      goto LAB_2c5f47a0;
                    }
                    if (uVar5 != 0xf4) goto LAB_2c5f444a;
                    uVar6 = 1;
                    goto LAB_2c5f459e;
                  }
                  if (0x5c < uVar5) {
                    if (uVar5 < 0xc2) goto LAB_2c5f444a;
                    uVar6 = 1;
                    goto joined_r0x2c5f4812;
                  }
                  if (uVar5 == 0) goto LAB_2c5f444a;
                  uVar6 = 1;
                  if (uVar5 < 0x23) goto LAB_2c5f47ee;
                }
              }
              goto LAB_2c5f4492;
            }
LAB_2c5f47ee:
            pbVar2 = pbVar2 + 1;
            goto LAB_2c5f444a;
          }
          if (uVar5 < 0xc2) goto LAB_2c5f453e;
joined_r0x2c5f4812:
          if ((uVar5 == 0xe0) &&
             (pbVar7 = pbVar2 + 1, pbVar2 = pbVar2 + 1, 0x1f < (byte)(*pbVar7 + 0x60)))
          goto LAB_2c5f453e;
        }
        else {
          if (uVar5 < 0xf0) {
joined_r0x2c5f452a:
            if (uVar5 == 0xed) {
              pbVar7 = pbVar2 + 1;
              pbVar2 = pbVar2 + 1;
              if ((*pbVar7 ^ 0x80) < 0x20) goto LAB_2c5f4484;
              goto LAB_2c5f453e;
            }
          }
          else if (uVar5 == 0xf0) {
LAB_2c5f47dc:
            pbVar7 = pbVar2 + 1;
            pbVar2 = pbVar2 + 1;
            if (0x2f < (byte)(*pbVar7 + 0x70)) goto LAB_2c5f453e;
          }
          else if (uVar5 < 0xf4) {
LAB_2c5f47a0:
            pbVar7 = pbVar2 + 1;
            pbVar2 = pbVar2 + 1;
            if (0x3f < (*pbVar7 ^ 0x80)) goto LAB_2c5f453e;
          }
          else {
joined_r0x2c5f459c:
            if (uVar5 != 0xf4) goto LAB_2c5f453e;
LAB_2c5f459e:
            pbVar7 = pbVar2 + 1;
            pbVar2 = pbVar2 + 1;
            if (0xf < (*pbVar7 ^ 0x80)) goto LAB_2c5f453e;
          }
          pbVar7 = pbVar2 + 1;
          pbVar2 = pbVar2 + 1;
          if (0x3f < (*pbVar7 ^ 0x80)) goto LAB_2c5f453e;
        }
LAB_2c5f4484:
        pbVar7 = pbVar2 + 1;
        if (0x3f < (pbVar2[1] ^ 0x80)) goto LAB_2c5f453e;
      }
LAB_2c5f4492:
      pbVar2 = pbVar7 + 1;
      uVar5 = (uint)pbVar7[1];
      goto LAB_2c5f449a;
    }
  }
  else if (bVar1 == 0x27) {
    uVar5 = (uint)param_1[1];
    if ((uVar5 != 0) &&
       ((pbVar2 = param_1 + 1, -1 < (int)(uVar5 << 0x18) || ((uVar5 + 0x3e & 0xff) < 0x33)))) {
      uVar6 = 0;
      pbVar4 = pbVar2;
      do {
        pbVar7 = pbVar2;
        if (-1 < (int)((uint)*(byte *)(_LAB_2c5f4690 + uVar5) << 0x19)) {
          if (uVar5 < 0xe1) {
            if (uVar5 < 0x5d) {
              if (uVar5 != 0) {
                if (0x27 < uVar5) {
                  while( true ) {
                    pbVar3 = pbVar2;
                    uVar5 = (uint)pbVar3[1];
                    pbVar2 = pbVar3 + 1;
                    pbVar7 = pbVar2;
                    if ((int)((uint)*(byte *)(_LAB_2c5f4690 + uVar5) << 0x19) < 0) break;
                    if (0xe0 < uVar5) {
                      if (uVar5 < 0xf0) goto joined_r0x2c5f450c;
                      if (uVar5 == 0xf0) goto LAB_2c5f47c8;
                      if (0xf3 < uVar5) goto joined_r0x2c5f457a;
                      goto LAB_2c5f478c;
                    }
                    if (0x5c < uVar5) {
                      if (0xc1 < uVar5) goto joined_r0x2c5f4822;
                      goto LAB_2c5f4446;
                    }
                    if (uVar5 == 0) goto LAB_2c5f4446;
                    if (uVar5 < 0x28) {
                      uVar5 = (uint)pbVar3[2];
                      pbVar2 = pbVar3 + 2;
                      pbVar4 = pbVar2;
                      if ((int)((uint)*(byte *)(_LAB_2c5f4690 + uVar5) << 0x19) < 0) {
                        uVar6 = 2;
                        pbVar7 = pbVar2;
                        break;
                      }
                      if (0xe0 < uVar5) {
                        if (uVar5 < 0xf0) {
                          uVar6 = 2;
                          goto joined_r0x2c5f450c;
                        }
                        if (uVar5 == 0xf0) {
                          uVar6 = 2;
                          goto LAB_2c5f47c8;
                        }
                        if (uVar5 < 0xf4) {
                          uVar6 = 2;
                          goto LAB_2c5f478c;
                        }
                        if (uVar5 != 0xf4) goto LAB_2c5f444a;
                        uVar6 = 2;
                        goto LAB_2c5f457e;
                      }
                      if (0x5c < uVar5) {
                        if (uVar5 < 0xc2) goto LAB_2c5f444a;
                        uVar6 = 2;
                        goto joined_r0x2c5f4822;
                      }
                      if (uVar5 == 0) goto LAB_2c5f444a;
                      uVar6 = 2;
                      if (uVar5 < 0x28) goto LAB_2c5f47ee;
                    }
                  }
                  goto LAB_2c5f44e6;
                }
                goto LAB_2c5f47ee;
              }
              goto LAB_2c5f4446;
            }
            if (uVar5 < 0xc2) goto LAB_2c5f4446;
joined_r0x2c5f4822:
            if ((uVar5 == 0xe0) &&
               (pbVar7 = pbVar2 + 1, pbVar2 = pbVar2 + 1, 0x1f < (byte)(*pbVar7 + 0x60)))
            goto LAB_2c5f4446;
          }
          else {
            if (uVar5 < 0xf0) {
joined_r0x2c5f450c:
              if (uVar5 == 0xed) {
                pbVar7 = pbVar2 + 1;
                pbVar2 = pbVar2 + 1;
                if ((*pbVar7 ^ 0x80) < 0x20) goto LAB_2c5f44d8;
                goto LAB_2c5f4446;
              }
            }
            else if (uVar5 == 0xf0) {
LAB_2c5f47c8:
              pbVar7 = pbVar2 + 1;
              pbVar2 = pbVar2 + 1;
              if (0x2f < (byte)(*pbVar7 + 0x70)) goto LAB_2c5f4446;
            }
            else if (uVar5 < 0xf4) {
LAB_2c5f478c:
              pbVar7 = pbVar2 + 1;
              pbVar2 = pbVar2 + 1;
              if (0x3f < (*pbVar7 ^ 0x80)) goto LAB_2c5f4446;
            }
            else {
joined_r0x2c5f457a:
              if (uVar5 != 0xf4) goto LAB_2c5f4446;
LAB_2c5f457e:
              pbVar7 = pbVar2 + 1;
              pbVar2 = pbVar2 + 1;
              if (0xf < (*pbVar7 ^ 0x80)) goto LAB_2c5f4446;
            }
            pbVar7 = pbVar2 + 1;
            pbVar2 = pbVar2 + 1;
            if (0x3f < (*pbVar7 ^ 0x80)) goto LAB_2c5f4446;
          }
LAB_2c5f44d8:
          pbVar7 = pbVar2 + 1;
          if (0x3f < (pbVar2[1] ^ 0x80)) goto LAB_2c5f4446;
        }
LAB_2c5f44e6:
        pbVar2 = pbVar7 + 1;
        uVar5 = (uint)pbVar7[1];
      } while( true );
    }
  }
  else if (bVar1 == 0x28) {
    uVar5 = (uint)param_1[1];
    pbVar4 = param_1 + 1;
    if (uVar5 < 0x29) {
      if ((uVar5 != 0x28) && (uVar5 != 0)) goto LAB_2c5f43f8;
    }
    else if ((-1 < (int)(uVar5 << 0x18)) || ((uVar5 + 0x3e & 0xff) < 0x33)) {
LAB_2c5f43f8:
      uVar6 = 0;
      pbVar2 = pbVar4;
      do {
        if (-1 < *(char *)(_LAB_2c5f4690 + uVar5)) {
          if (uVar5 < 0xe1) {
            if (uVar5 < 0x5d) {
              if (uVar5 < 0x29) goto LAB_2c5f4446;
              if (uVar5 == 0x29) {
LAB_2c5f4830:
                pbVar2 = pbVar2 + 1;
                goto LAB_2c5f444a;
              }
              do {
                bVar1 = pbVar2[1];
                pbVar3 = pbVar2 + 1;
                pbVar7 = pbVar2;
                while( true ) {
                  pbVar2 = pbVar3;
                  if (0xdf < bVar1) {
                    if (bVar1 < 0xf0) {
                      if (bVar1 == 0xe0) goto LAB_2c5f46f4;
                      if (bVar1 != 0xed) goto LAB_2c5f443a;
                      goto LAB_2c5f4614;
                    }
                    if (bVar1 == 0xf0) goto LAB_2c5f47b4;
                    if (bVar1 < 0xf4) goto LAB_2c5f477a;
                    if (bVar1 != 0xf4) goto LAB_2c5f4446;
                    goto LAB_2c5f455c;
                  }
                  if (0x5b < bVar1) break;
                  if (bVar1 == 0) goto LAB_2c5f4446;
                  if (bVar1 != 0x29) goto LAB_2c5f441c;
                  uVar5 = (uint)pbVar7[2];
                  pbVar2 = pbVar7 + 2;
                  pbVar4 = pbVar2;
                  if (*(char *)(_LAB_2c5f4690 + uVar5) < '\0') {
                    uVar6 = 3;
                    goto LAB_2c5f441c;
                  }
                  if (0xe0 < uVar5) {
                    if (uVar5 < 0xf0) {
                      uVar6 = 3;
                      goto joined_r0x2c5f486a;
                    }
                    if (uVar5 == 0xf0) {
                      uVar6 = 3;
                      goto LAB_2c5f47b4;
                    }
                    if (uVar5 < 0xf4) {
                      uVar6 = 3;
                      goto LAB_2c5f477a;
                    }
                    if (uVar5 != 0xf4) goto LAB_2c5f444a;
                    uVar6 = 3;
                    goto LAB_2c5f455c;
                  }
                  if (0x5c < uVar5) {
                    if (uVar5 < 0xc2) goto LAB_2c5f444a;
                    if (uVar5 == 0xe0) {
                      uVar6 = 3;
                      goto LAB_2c5f46f4;
                    }
                    uVar6 = 3;
                    goto LAB_2c5f4410;
                  }
                  if (uVar5 < 0x29) goto LAB_2c5f444a;
                  if (uVar5 == 0x29) goto LAB_2c5f4830;
                  uVar6 = 3;
                  bVar1 = pbVar7[3];
                  pbVar3 = pbVar7 + 3;
                  pbVar7 = pbVar2;
                }
              } while (bVar1 == 0x5c);
              if (-1 < (int)((uint)bVar1 << 0x18)) goto LAB_2c5f441c;
              if (bVar1 < 0xc2) goto LAB_2c5f4446;
            }
            else {
              if (uVar5 < 0xc2) goto LAB_2c5f4446;
              if (uVar5 == 0xe0) {
LAB_2c5f46f4:
                pbVar7 = pbVar2 + 1;
                pbVar2 = pbVar2 + 1;
                if (0x1f < (byte)(*pbVar7 + 0x60)) goto LAB_2c5f4446;
              }
            }
          }
          else {
            if (uVar5 < 0xf0) {
joined_r0x2c5f486a:
              if (uVar5 == 0xed) {
LAB_2c5f4614:
                pbVar7 = pbVar2 + 1;
                pbVar2 = pbVar2 + 1;
                if ((*pbVar7 ^ 0x80) < 0x20) goto LAB_2c5f4410;
                goto LAB_2c5f4446;
              }
            }
            else if (uVar5 == 0xf0) {
LAB_2c5f47b4:
              pbVar7 = pbVar2 + 1;
              pbVar2 = pbVar2 + 1;
              if (0x2f < (byte)(*pbVar7 + 0x70)) goto LAB_2c5f4446;
            }
            else if (uVar5 < 0xf4) {
LAB_2c5f477a:
              pbVar7 = pbVar2 + 1;
              pbVar2 = pbVar2 + 1;
              if (0x3f < (*pbVar7 ^ 0x80)) goto LAB_2c5f4446;
            }
            else {
              if (uVar5 != 0xf4) goto LAB_2c5f4446;
LAB_2c5f455c:
              pbVar7 = pbVar2 + 1;
              pbVar2 = pbVar2 + 1;
              if (0xf < (*pbVar7 ^ 0x80)) goto LAB_2c5f4446;
            }
LAB_2c5f443a:
            pbVar7 = pbVar2 + 1;
            pbVar2 = pbVar2 + 1;
            if (0x3f < (*pbVar7 ^ 0x80)) goto LAB_2c5f4446;
          }
LAB_2c5f4410:
          pbVar7 = pbVar2 + 1;
          pbVar2 = pbVar2 + 1;
          if (0x3f < (*pbVar7 ^ 0x80)) goto LAB_2c5f4446;
        }
LAB_2c5f441c:
        uVar5 = (uint)pbVar2[1];
        pbVar2 = pbVar2 + 1;
      } while( true );
    }
  }
  return 0;
LAB_2c5f4446:
  pbVar2 = pbVar4;
  pbVar4 = pbVar2;
  if (uVar6 < 2) {
LAB_2c5f453e:
    pbVar2 = pbVar4;
    if (uVar6 == 0) {
      return 0;
    }
  }
LAB_2c5f444a:
  return (int)pbVar2 - (int)param_1;
}

